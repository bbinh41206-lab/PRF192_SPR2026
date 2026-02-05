#include <stdio.h>

int main() {
    int soDu = 1000000, rutTien;

    while (soDu > 0) {
        printf("So du: %d\nNhap so tien muon rut (0 de thoat): ", soDu);

        if (scanf("%d", &rutTien) != 1 || rutTien < 0) {
            while (getchar() != '\n');
            continue;
        }

        if (rutTien == 0) break;

        if (rutTien > soDu)
            printf("Khong du tien!\n");
        else {
            soDu -= rutTien;
            printf("Rut thanh cong!\n");
        }
    }

    printf("Ket thuc giao dich.\n");
    return 0;
}