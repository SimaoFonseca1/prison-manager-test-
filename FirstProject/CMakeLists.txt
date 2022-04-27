cmake_minimum_required(VERSION 3.21)
project(FirstProject)

set(CMAKE_CXX_STANDARD 14)
set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})
set(SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/factorial.h
        ${PROJECT_SOURCES_DIR}/factorial.cpp
        ${PROJECT_HEADERS_DIR}/pl7.h
        ${PROJECT_SOURCES_DIR}/pl7.cpp
        )
add_executable(FirstProject main.cpp headers/factorial.h sources/factorial.cpp headers/pl1.h sources/pl1.cpp headers/pl2.h sources/pl2.cpp headers/pl3.h sources/pl3.cpp headers/dinamicpl3.h sources/dinamicpl3.cpp headers/pl4.h sources/pl4.cpp sources/pl7.cpp headers/pl7.h)
