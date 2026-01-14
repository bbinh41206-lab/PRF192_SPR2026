#include<stdio.h>
int main (){
	char kt = 'A';
	printf("Gia tri ki tu: %c\n", kt);
	printf("Gia tri thap phan: %d\n", kt);
	printf("Gia tri hex: %x\n", kt);
	printf("Gia tri octal: %o\n", kt);
	printf("Kich thuoc kieu du lieu cua bien kt: %lu", sizeof(kt));
	printf("%-10s|%-10s|%-10s|%-10s|%-10s|%-10s","Ten Bien" , "Gia Tri" , "Dec" , "Hex" , "Oct" , "Size");
	printf("%-10s|%-10s|%-10s|%-10s|%-10s|%-10s","Ten Bien" , "Gia Tri" , "Dec" , "Hex" , "Oct" , "Size");
	
	
	return 0;
}