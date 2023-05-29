cmake_minimum_required(VERSION 3.12)
project(software_for_hotel)

set(CMAKE_CXX_STANDARD 11)

# Додайте всі файли джерела вашого проекту
set(SOURCES
        VisitorsTable.cpp
        main.cpp
)

# Створіть виконуваний файл з вашими джерелами
add_executable(${PROJECT_NAME} ${SOURCES})
