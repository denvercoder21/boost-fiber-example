cmake_minimum_required(VERSION 3.20)
project(FiberExample)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost "1.76.0" REQUIRED COMPONENTS fiber)

add_executable(FiberExample
    src/main.cpp
)

target_compile_options(FiberExample
    PRIVATE
        -Wall
        -Wextra
        -pedantic
        -Werror
)

target_include_directories(FiberExample
    PUBLIC
        ${Boost_INCLUDE_DIRS}
)

target_link_libraries(FiberExample
    Boost::fiber
)
