cmake_minimum_required(VERSION 3.28)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
    set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()



project(ParticleSimulator)
set(CMAKE_CXX_STANDARD 17)
find_package(fmt CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

include_directories(include)

add_executable(Particle)
target_sources(Particle PRIVATE src/main.cpp  src/Emitter.cpp  src/Vec3.cpp src/Random.cpp
        src/common/shader.cpp
        include/shader.hpp include/Particle.h include/Emitter.h include/Vec3.h include/Random.h)
target_link_libraries(Particle PRIVATE  fmt::fmt-header-only ${OPENGL_LIBRARIES} GLEW::GLEW glfw glm::glm)

################################
#TESTS
################################

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()
add_executable(ParticleTests)
target_sources(ParticleTests PRIVATE tests/ParticleTests.cpp src/Random.cpp  src/Emitter.cpp src/Vec3.cpp include/Emitter.h include/Particle.h include/Vec3.h include/Random.h include/shader.hpp)
target_link_libraries(ParticleTests PRIVATE GTest::gtest GTest::gtest_main )
gtest_discover_tests(ParticleTests)