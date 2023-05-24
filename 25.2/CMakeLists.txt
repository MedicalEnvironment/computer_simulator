cmake_minimum_required(VERSION 3.23) #Версия cmake
project("25.2" VERSION 1.0) #имя проекта

set(CMAKE_CXX_STANDARD 17) #стандарт плюсов

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include) #подключение include h значений

add_subdirectory(src) #добавление директории src