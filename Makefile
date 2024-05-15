complier:=clang-18
options:=-std=c99 --pedantic-errors -Wall -Wextra -Werror -Wvla

dist:=dist
objs:=$(dist)/objss
adv:=advance

fmt:
	clang-format -style=llvm -i *.c **/*.c *.h **/*.h

run: main
	$(complier) $(options) -o $(dist)/main $(objs)/main.o $(objs)/utils.o $(objs)/list.o $(objs)/node.o
	$(dist)/$?

main: list $(adv)/main.c
	$(complier) $(options) -o $(objs)/$@.o -c $(adv)/$@.c

utils: $(adv)/utils.h $(adv)/utils.c
	$(complier) $(options) -o $(objs)/$@.o -c $(adv)/$@.c

list: node $(adv)/list.h $(adv)/list.c
	$(complier) $(options) -o $(objs)/$@.o -c $(adv)/$@.c

node: $(adv)/node.h $(adv)/node.c
	$(complier) $(options) -o $(objs)/$@.o -c $(adv)/$@.c
