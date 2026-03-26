#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("\nINPUT:\n");

    char str[100];
    fgets(str, sizeof(str), stdin);

    printf("\nOUTPUT:\n");

    int count = 0;

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);

    printf("\n");
    system ("pause");
    return(0);
}