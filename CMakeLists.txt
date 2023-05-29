cmake_minimum_required(VERSION 3.12)
project(software_for_hotel)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
        VisitorsTable.cpp
        main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
