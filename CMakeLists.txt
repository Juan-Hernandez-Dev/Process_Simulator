cmake_minimum_required(VERSION 3.10)
project(ProcessManager)

# Use C++11 standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add all source files
add_executable(ProcessManager
    main.cpp
    Process.cpp
    Memory.cpp
    Scheduler.cpp
    Display.cpp
)
