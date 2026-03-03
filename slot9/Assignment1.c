#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SanPham {
    int ma;
    char ten[50];
    float gia;
    int soluong;
};

void ghiSanPham() {
    FILE *f = fopen("products.bin", "wb");
    struct SanPham sp;

    printf("Nhap ma: ");
    scanf("%d", &sp.ma);

    printf("Nhap ten: ");
    getchar();
    fgets(sp.ten, 50, stdin);
    sp.ten[strcspn(sp.ten, "\n")] = 0;

    printf("Nhap gia: ");
    scanf("%f", &sp.gia);

    printf("Nhap so luong: ");
    scanf("%d", &sp.soluong);

    fwrite(&sp, sizeof(sp), 1, f);
    fclose(f);

    printf("Da ghi thanh cong!\n");
}

void docSanPham() {
    FILE *f = fopen("products.bin", "rb");
    struct SanPham sp;

    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return;
    }

    while (fread(&sp, sizeof(sp), 1, f)) {
        printf("%d | %s | %.2f | %d\n",
               sp.ma, sp.ten, sp.gia, sp.soluong);
    }

    fclose(f);
}

void suaSanPham() {
    FILE *f = fopen("products.bin", "rb+");
    struct SanPham sp;
    int ma;

    printf("Nhap ma can sua: ");
    scanf("%d", &ma);

    while (fread(&sp, sizeof(sp), 1, f)) {
        if (sp.ma == ma) {
            printf("Nhap gia moi: ");
            scanf("%f", &sp.gia);

            fseek(f, -sizeof(sp), SEEK_CUR);
            fwrite(&sp, sizeof(sp), 1, f);

            printf("Da sua thanh cong!\n");
            break;
        }
    }

    fclose(f);
}

int main() {
    int chon;

    do {
        printf("\n1. Ghi\n");
        printf("2. Doc\n");
        printf("3. Sua\n");
        printf("4. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: ghiSanPham(); break;
            case 2: docSanPham(); break;
            case 3: suaSanPham(); break;
        }

    } while (chon != 4);

    return 0;
}