//1.T?o file text "baitap1.txt", ghi 1 so vao file nay.
//2. Doc noi dung o file nay. In ra man hinh console

#include <stdio.h>
int main() {
	FILE *fp;
	fp = fopen("baitap1.txt", "w");
	
	if(fp==NULL) {
		printf("Error!");
		return 0;
	}
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	fprintf(fp,"Gia tri n: %d", n);
	
	//dong file
	fclose(fp);
	
	//doc file 
	fp = fopen("baitap1.txt", "r");
	if(fp == NULL) 
	{
		printf("Error");
		return 0;
	}
	char s;
	do{
		s = getc(fp);     //doc tung ki tu 1 tren file
		printf("%c", s);
	}
	while(s!=EOF);
	fclose(fp);
	return 0;
}


