cmake_minimum_required(VERSION 3.16)

add_executable(skillbox_25_2 main.cpp ram.cpp gpu.cpp cpu.cpp kbd.cpp disk.cpp)
target_include_directories(skillbox_25_2 PUBLIC ${INCLUDE_DIR})