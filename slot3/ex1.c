#include<stdio.h>
int main(){
	int a = 7;
	int b = 2;
	float kq;
	kq = a + b;
	printf("Ket qua cua %d + %d bang: %.0f\n", a, b, kq);
	kq = a - b;
	printf("Ket qua cua %d - %d bang: %.0f\n", a, b, kq);
	kq = a * b;
	printf("Ket qua cua %d * %d bang: %.0f\n", a, b, kq);
	kq = (float) a / b;
	printf("Ket qua cua %d / %d bang: %.2f\n", a, b, kq);
	
	return 0;


}