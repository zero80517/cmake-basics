cmake_minimum_required(VERSION 3.5)

project(math_tools LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# See http://www.forum.crossplatform.ru/index.php?showtopic=4879
# Quote: "I think it's not the only way out, but I always make libraries. A static library is an archive of object files, there is nothing fancy in it."
add_library(${PROJECT_NAME} STATIC math_tools.cpp)
