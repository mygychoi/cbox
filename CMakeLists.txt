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
add_executable(ptr7 src/ptr/ptr7.c)
add_executable(ptr8 src/ptr/ptr8.c)
add_executable(ptr9 src/ptr/ptr9.c)
add_executable(ptr10 src/ptr/ptr10.c)
add_executable(ptr11 src/ptr/ptr11.c)
add_executable(ptr20 src/ptr/ptr20.c)
add_executable(ptr21 src/ptr/ptr21.c src/collections/arr.c)
add_executable(ptr22 src/ptr/ptr22.c src/collections/matrix.c src/collections/volume.c)
add_executable(ptr23 src/ptr/ptr23.c src/collections/matrix.c)

add_executable(str1 src/str/str1.c)
add_executable(str2 src/str/str2.c)
add_executable(str3 src/str/str3.c)
add_executable(str src/str/str.c)

target_compile_options(main PUBLIC --pedantic-errors PUBLIC -Wall PUBLIC -Wextra PUBLIC -Werror PUBLIC -Wvla)
