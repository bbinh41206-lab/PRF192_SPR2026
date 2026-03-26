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

    int digits = 0, letters = 0, others = 0;

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
    for(int i = 0; str[i] != '\0'; i++) {
        if(isdigit(str[i])) {
            digits++;
        } else if(isalpha(str[i])) {
            letters++;
        } else if(ispunct(str[i]) || str[i] == ' ') {
            others++;
        }
    }

    printf("%d\n%d\n%d", digits, letters, others);

    printf("\n");
    system("pause");
    return(0);
}