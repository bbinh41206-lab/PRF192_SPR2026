#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n===== MAY TINH BO TUI =====\n");
        printf("1. Cong (+)\n");
        printf("2. Tru (-)\n");
        printf("3. Nhan (*)\n");
        printf("4. Chia (/)\n");
        printf("0. Thoat\n");
        printf("Chon phep tinh: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Thoat chuong trinh...\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {

            printf("Nhap so thu nhat: ");
            scanf("%f", &a);

            printf("Nhap so thu hai: ");
            scanf("%f", &b);

            switch (choice) {
                case 1:
                    result = a + b;
                    printf("Ket qua: %.2f\n", result);
                    break;

                case 2:
                    result = a - b;
                    printf("Ket qua: %.2f\n", result);
                    break;

                case 3:
                    result = a * b;
                    printf("Ket qua: %.2f\n", result);
                    break;

                case 4:
                    if (b == 0) {
                        printf("Khong the chia cho 0!\n");
                    } else {
                        result = a / b;
                        printf("Ket qua: %.2f\n", result);
                    }
                    break;
            }

        } else {
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}