#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("\nINPUT:\n");

    char str[200];
    fgets(str, sizeof(str), stdin);

    printf("\nOUTPUT:\n");

    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i] != '\n' && str[i-1] == ' ')) {
            count++;
        }
        i++;
    }

    printf("%d", count);

    printf("\n");
    system("pause");
    return 0;
}