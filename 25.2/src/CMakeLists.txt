cmake_minimum_required(VERSION 3.23)

add_executable(25.2 main.cpp ram.cpp cpu.cpp gpu.cpp disk.cpp keyboard.cpp
        ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/keyboard.h) #добавление h файлов

target_include_directories(25.2 PUBLIC ${MY_INCLUDE_DIR}) #включение каталога