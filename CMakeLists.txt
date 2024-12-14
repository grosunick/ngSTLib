cmake_minimum_required(VERSION 3.5)
project(ngStmLib CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/googletest)

include_directories(libs/googletest/googletest/include)
include_directories(src)
include_directories(../../Drivers/CMSIS/include)

file(GLOB_RECURSE SOURCES "src/*.*" "test/*.*")

add_executable(${PROJECT_NAME}Test ${SOURCES})
target_link_libraries(${PROJECT_NAME}Test PRIVATE gtest gtest_main gmock)
target_compile_options(${PROJECT_NAME}Test PRIVATE -Wall -Wextra -pedantic -Werror -DTEST_MODE=1)