cmake_minimum_required (VERSION 3.18)
project(cuda-executable LANGUAGES CUDA CXX)

include(CheckLanguage)
check_language(CUDA)

if(NOT DEFINED CMAKE_CUDA_STANDARD)
    set(CMAKE_CUDA_STANDARD 11)
    set(CMAKE_CUDA_STANDARD_REQUIRED ON)
endif()

# Add source to this project's executable.
add_executable (cuda-executable main.cpp)
