cmake_minimum_required(VERSION 3.1.0)
project(westwell VERSION 0.1.0)

add_subdirectory(src)
# add_subdirectory(test)

# Generate the testing executable file.
include(CTest)
enable_testing()
add_executable(test_demo src/node_test.cpp)
target_link_libraries(test_demo src/node.cpp)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)