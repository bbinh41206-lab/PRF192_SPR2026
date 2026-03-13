//Bài 2: Chuyển thành con trỏ cho khai báo mảng
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    printf("\nINPUT:\n");

    int n;
    scanf("%d",&n);

    int *a;
    a = (int*)malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nOUTPUT:\n");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    free(a);

    printf("\n");
    system("pause");
    return 0;
}