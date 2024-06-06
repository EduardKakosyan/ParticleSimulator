cmake_minimum_required(VERSION 3.28)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND NOT DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
    set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

project(ParticleSimulator)
find_package(fmt CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Particle
        src/Vec3.cpp
)
target_sources(Particle PRIVATE src/main.cpp src/Emitter.cpp src/Vec3.cpp
include/Particle.h include/Emitter.h include/Vec3.h)
target_link_libraries(Particle PRIVATE fmt::fmt-header-only)

##############################################
# Testing
##############################################

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()
add_executable(ParticleTests)
target_sources(ParticleTests PRIVATE test/ParticleTests.cpp src/Emitter.cpp src/Vec3.cpp include/Emitter.h include/Particle.h include/Vec3.h)
target_link_libraries(ParticleTests PRIVATE GTest::gtest_main)
gtest_discover_tests(ParticleTests)
