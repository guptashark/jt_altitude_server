cmake_minimum_required(VERSION 3.10)

# set the project name
project(jt_altitude_server_tests)

SET(TEST_SRC jt_altitude_server_tests.cpp jt_altitude_server.cpp)

# add the executable
add_executable(jt_altitude_server_tests ${TEST_SRC})
