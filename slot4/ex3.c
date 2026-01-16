#include<stdio.h>
int main(){
	float sothuc;
	int phannguyen;
	float phanthapphan;
	printf("Nhap so thuc");
	scanf("%f", &sothuc);
	phannguyen = (int) sothuc;
	phanthapphan = sothuc - phannguyen;
	printf("Gia tri da nhap %.4f\n", sothuc);
	printf("In phan nguyen la: %d\n", phannguyen);
	printf("Phan thap phan la: %.4f", phanthapphan);
	
}