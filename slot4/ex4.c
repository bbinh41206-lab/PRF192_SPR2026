#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap vao so nguyen a, b: ");
	scanf("%d,%d",&a,&b);
	printf("Nhap phep toan: ");
	char pt;
	fflush(stdin); 
	scanf("%c", &pt);
	if (b == 0) 
		printf("\n Khong the chia cho 0\n"); 
	else 
	    { float kqua = (float)a / b;
		printf("\nkqua: %d %c %d = %.2f\n", a,pt, b, kqua);
	    
		}
		
}
	