cmake_minimum_required(VERSION 3.10)
project(MyNcursesProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find ncurses
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

# Create executable
add_executable(apk 
    main.cpp
    
)

# Link ncurses
target_link_libraries(apk ${CURSES_LIBRARIES})
