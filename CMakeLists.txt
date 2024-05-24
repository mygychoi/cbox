cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER clang-18)

project(Cbox VERSION 1.1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(main src/main.c src/stack.c)
add_executable(ex1 src/ex1.c)
add_executable(test_vec src/collections/tests/test_vec.c src/collections/vec.c)
add_executable(ptr1 src/ptr/ptr1.c)
add_executable(ptr2 src/ptr/ptr2.c)
add_executable(ptr3 src/ptr/ptr3.c)
add_executable(ptr4 src/ptr/ptr4.c)
add_executable(ptr5 src/ptr/ptr5.c)
add_executable(ptr6 src/ptr/ptr6.c)

target_compile_options(main PUBLIC --pedantic-errors PUBLIC -Wall PUBLIC -Wextra PUBLIC -Werror PUBLIC -Wvla)
