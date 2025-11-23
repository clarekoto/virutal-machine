#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum {
    PSH,
    ADD,
    POP,
    SET,
    HLT
} InstructionSet;

const int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT
};

int ip = 0;
bool running = true;

int main(int argc, char** argv) {
    while (running) {
	int x = fetch();
	if (x == HLT) {
	    running = false;
        }
	ip++;
    }
    return 0;
}

int fetch() {
    return program[ip];
}

void eval(int instr) {
    switch (instr) {
        case HLT:
            running = false;
            break;
    }
}
