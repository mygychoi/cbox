complier=clang-18
options=-std=c99 --pedantic-errors -Wall -Wextra -Werror -Wvla

fmt=clang-format -style=llvm -i

calc: calc.c collections/stack.o
	$(complier) -o $@ $?

collections/stack.o: collections/stack.c collections/stack.h
	$(fmt) $?
	$(complier) -c $(options) $?
