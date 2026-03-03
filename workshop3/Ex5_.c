#include <stdio.h>

int is_prime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    for (int i = a; i <= b; i++) {

        if (i % 2 == 0 && i != 2)
            continue;

        if (is_prime(i))
            printf("%d ", i);
    }

    return 0;
}