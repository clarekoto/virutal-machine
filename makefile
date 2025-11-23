CC = clang
CFLAGS = -Wall -Wextra -g -std=c11
all: vm
vm: vm.o
vm.o: vm.c
