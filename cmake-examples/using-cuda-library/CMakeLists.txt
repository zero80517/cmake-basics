# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.18)
project ("using-cuda-library")

add_subdirectory ("cuda-library")
add_subdirectory ("cuda-executable")

target_link_libraries(cuda-executable PUBLIC cuda-library)

# add the math_tools dir to the search path for include files
# so that we will find math_tools.h
target_include_directories(cuda-executable PUBLIC
                          "${PROJECT_SOURCE_DIR}/cuda-library"
                          )

# See https://stackoverflow.com/questions/6594796/how-do-i-make-cmake-output-into-a-bin-dir
# and https://cmake.org/cmake/help/latest/variable/CMAKE_BUILD_TYPE.html
# Make CMake save the files in a ./bin/Debug (or ./bin/Release) directory
set_target_properties( 
    cuda-executable cuda-library
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}"
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}"
)
