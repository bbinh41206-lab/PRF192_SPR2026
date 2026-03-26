#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float price;
    int quantity;
} Product;

// WRITE + APPEND
void add(char mode[]) {
    FILE *f = fopen("products.bin", mode);
    if (!f) {
        printf("Cannot open file!\n");
        return;
    }

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    Product p;
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("ID: "); scanf("%d", &p.id);
        printf("Name: "); scanf("%s", p.name);
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(p), 1, f);
    }
    fclose(f);
}

// READ
void read() {
    FILE *f = fopen("products.bin", "rb");
    if (!f) {
        printf("File not found!\n");
        return;
    }

    Product p;
    printf("\n----------------------------------\n");
    printf("%-5s %-10s %-10s %-5s\n", "ID", "Name", "Price", "Qty");
    printf("----------------------------------\n");

    while (fread(&p, sizeof(p), 1, f)) {
        printf("%-5d %-10s %-10.2f %-5d\n", p.id, p.name, p.price, p.quantity);
    }

    printf("----------------------------------\n");
    fclose(f);
}

// MODIFY
void modify() {
    FILE *f = fopen("products.bin", "rb+");
    if (!f) {
        printf("File not found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter ID: ");
    scanf("%d", &id);

    Product p;
    while (fread(&p, sizeof(p), 1, f)) {
        if (p.id == id) {
            found = 1;

            printf("New name: "); scanf("%s", p.name);
            printf("New price: "); scanf("%f", &p.price);
            printf("New quantity: "); scanf("%d", &p.quantity);

            fseek(f, -sizeof(p), SEEK_CUR);
            fwrite(&p, sizeof(p), 1, f);

            printf("Updated!\n");
            break;
        }
    }

    if (!found) printf("Not found!\n");

    fclose(f);
}

// MAIN
int main() {
    int c;
    do {
        printf("\n1.Write 2.Append 3.Read 4.Modify 5.Exit\n");
        printf("Choose: ");
        scanf("%d", &c);

        if (c == 1) add("wb");
        else if (c == 2) add("ab");
        else if (c == 3) read();
        else if (c == 4) modify();

    } while (c != 5);

    return 0;
}