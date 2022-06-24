cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Tutorial VERSION 1.1)

# add the executable
add_executable(Tutorial tutorial.cxx)

# See https://stackoverflow.com/questions/14248848/what-mean-file-with-extension-h-in
configure_file(TutorialConfig.h.in TutorialConfig.h)

# include path for targe. See https://stackoverflow.com/questions/31969547/what-is-the-difference-between-include-directories-and-target-include-directorie
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
