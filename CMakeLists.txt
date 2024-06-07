cmake_minimum_required(VERSION 3.28)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
    set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

project(ParticleSimulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Particle)
target_sources(Particle PRIVATE src/main.cpp)

################################
#TESTS
################################

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()
add_executable(ParticleTest)
target_sources(ParticleTest PRIVATE tests/ParticleTests.cpp)
target_link_libraries(ParticleTest PRIVATE GTest::gtest GTest::gtest_main)
gtest_discover_tests(ParticleTest)