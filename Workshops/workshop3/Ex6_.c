#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    int number, guess;
    int count;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Game doan so tu 1 den 100\n");
    printf("Ban co toi da 7 lan doan\n");

    for (count = 1; count <= 7; count++) {

        printf("Lan %d - Nhap so: ", count);
        scanf("%d", &guess);

        if (guess < 0) {
            printf("So khong hop le. Nhap lai!\n");
            count--;
            continue;
        }

        if (guess == number) {
            printf("Chuc mung! Ban da doan dung!\n");
            break;
        }

        if (guess < number) {
            printf("So ban doan nho hon.\n");
        } else {
            printf("So ban doan lon hon.\n");
        }
    }

    if (count > 7) {
        printf("Ban da thua! So dung la: %d\n", number);
    }
}

int main() {
    play_game();
    return 0;
}