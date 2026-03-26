#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");

  int n;
  scanf("%d",&n);

  if(n <= 0){
      printf("OUTPUT:\n");
      printf("Invalid input");
      system("pause");
      return 0;
  }

  int a[100];
  for(int i = 0; i < n; i++){
      scanf("%d",&a[i]);
  }

  for(int i = 0; i < n-1; i++){
      for(int j = i+1; j < n; j++){
          if(a[i] < a[j]){
              int temp = a[i];
              a[i] = a[j];
              a[j] = temp;
          }
      }
  }

  printf("OUTPUT:\n");

  for(int i = 0; i < n; i++){
      if(a[i] % 2 == 0){
          printf("%d\n", a[i]);
      }
  }

  system ("pause");
  return(0);
}