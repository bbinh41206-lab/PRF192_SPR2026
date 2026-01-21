#include<stdio.h>
int main(){
	int x ;
	printf("Nhap x:",x);
	scanf("%d",&x);
	if(x<0){
		x = -x;
	
	}
	printf("|%d| =%d", x, x);
	    
}