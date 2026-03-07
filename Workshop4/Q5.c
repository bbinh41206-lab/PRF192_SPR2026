#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int rows, cols;
  scanf("%d %d", &rows, &cols);

  int a[100][100];

  for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
          scanf("%d", &a[i][j]);
      }
  }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");

  for(int i = 0; i < rows; i++){
      int sum = 0;

      for(int j = 0; j < cols; j++){
          sum += a[i][j];
      }

      printf("%d\n", sum);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}