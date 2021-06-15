cmake_minimum_required(VERSION 3.16)

add_executable(skillbox25_1 main.cpp ${INCLUDE_DIR}/instruments.h ${INCLUDE_DIR}/structures.h)
target_include_directories(skillbox25_1 PUBLIC ${INCLUDE_DIR})