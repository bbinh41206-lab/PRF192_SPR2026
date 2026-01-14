#include<stdio.h>
int main(){
	char kt = 'A';
	printf("Gia tri ki tu: %c\n", kt);
	printf("Gia tri thap phan: %d\n", kt);
	printf("Gia tri hex: %x\n", kt);
	printf("Gia tri octal: %o\n", kt);
	printf("Kich thuoc kieu du lieu cua bien kt: %lu", sizeof(kt));
	return 0;
}