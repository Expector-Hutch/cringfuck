#include "io_linux.h"

char tape[100];
char *ptr = &tape[50];

int main() {
    putchar('\033');putchar('[');putchar('0');putchar('m');
    return 0;
}