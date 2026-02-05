#include <stdio.h>
int main()
{
	int n, soDu;
	long long kq = 0;
	int viTri = 1;
	printf("Nhap n: ");
	while(scanf("%d",&n) != 1 || n<0)
	{
		printf("Nhap lai n: ");
		while (getchar() != '\n');
	}
	if(n==0)
	{
		printf("So nhi phan: 0\n");
	}
	else
	{
		while(n>0)
		{
			soDu = n%2;
			kq = kq + soDu*viTri;
			viTri = viTri*10;
			n = n/2;
		}
	}
	printf("So nhi phan: %lld\n", kq);
	return 0;
}