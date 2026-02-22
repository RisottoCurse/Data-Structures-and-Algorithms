cmake_minimum_required(VERSION 3.16)

project(MyProject
    VERSION 1.0
    DESCRIPTION "DSA C++"
    LANGUAGES CXX
)

# using modern c++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# enable warning
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

# add executable
add_executable(my_program ${SOURCES})

# Include Headers
target_include_directories(my_program
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)


