cmake_minimum_required(VERSION 3.0.0)
project(WESTWELL_TEST_PROJECT VERSION 1.0.0)

include(CTest)
include(GoogleTest)

enable_testing()

add_executable(WESTWELL_TEST_PROJECT src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
