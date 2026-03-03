#include <stdio.h>

float calculate_salary(float hours, float rate)
{
    float salary;

    if (hours <= 40)
    {
        salary = hours * rate;
    }
    else
    {
        salary = (40 * rate) + (hours - 40) * rate * 1.5;
    }

    return salary;
}

int main()
{
    float hours, rate;

    printf("Nhap so gio lam: ");
    scanf("%f", &hours);

    printf("Nhap tien cong moi gio: ");
    scanf("%f", &rate);

    if (hours < 0 || rate < 0)
    {
        printf("Du lieu khong hop le!\n");
        return 0;
    }

    float result = calculate_salary(hours, rate);

    printf("Tien luong phai tra: %.0f VND\n", result);

    return 0;
}