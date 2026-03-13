#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowel(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    system("cls");

    printf("\nINPUT:\n");
    char str[101];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("\nOUTPUT:\n");
    int vowelCount = countVowel(str);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}