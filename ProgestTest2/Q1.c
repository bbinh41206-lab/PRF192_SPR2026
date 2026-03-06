#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    printf("INPUT:\n");

    //INPUT
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int found = 0;

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    //OUTPUT
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0){
            printf("%d ", i);
            found = 1;
        }

    if(found == 0){
        printf("Not found");
    }

    return 0;
}