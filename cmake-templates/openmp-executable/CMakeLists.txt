cmake_minimum_required (VERSION 3.18)
project(openmp-executable LANGUAGES CXX)

# Add source to this project's executable.
add_executable (openmp-executable hello.cpp)

# add openmp library https://cliutils.gitlab.io/modern-cmake/chapters/packages/OpenMP.html
find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(${PROJECT_NAME} PUBLIC OpenMP::OpenMP_CXX)
endif()
