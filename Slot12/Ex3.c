#include <stdio.h>

void inASCII() {
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c : %d\n", c, c);
    }
}

int main() {
    printf("Ma ASCII tu A den Z:\n");
    inASCII();
    return 0;
}