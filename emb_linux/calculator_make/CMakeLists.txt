# Minimum required version of CMake
cmake_minimum_required(VERSION 3.22.1)

# Project name
project(CalculatorProject LANGUAGES C)



# Define source files
set(SRC_FILES
    main.c
    Lib/add.c
    Lib/mult.c
    Lib/division.c
    Lib/substraction.c
)

# Create executable
add_executable(calculator_app ${SRC_FILES})

# Include directories
target_include_directories(calculator_app PUBLIC include)
message(STATUS ${SRC_FILES})
