cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER clang-18)

project(Cbox VERSION 1.1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)



add_executable(main main.c stack.c)
add_executable(ex1 ex1.c)

target_compile_options(main PUBLIC --pedantic-errors PUBLIC -Wall PUBLIC -Wextra PUBLIC -Werror PUBLIC -Wvla)
