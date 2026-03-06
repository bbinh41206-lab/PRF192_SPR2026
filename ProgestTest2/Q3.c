#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * Implement the function to find the min element of each row.
 */
void findRowMin(int matrix[ROWS][COLS], int result[ROWS]) {
    // Your logic here
    for(int i = 0; i < ROWS; i++){
        int min = matrix[i][0];
        for(int j = 1; j < COLS; j++){
            if(matrix[i][j] < min)
                min = matrix[i][j];
        }
        result[i] = min;
    }
}

/**
 * Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
    for(int i = 0; i < ROWS; i++){
        printf("%d\n", result[i]);
    }
}

int main() {
  system("cls");
  printf("INPUT:\n");	
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	
  int matrix[ROWS][COLS];
  int result[ROWS];

  for(int i = 0; i < ROWS; i++)
      for(int j = 0; j < COLS; j++)
          scanf("%d", &matrix[i][j]);

  findRowMin(matrix, result);
  	
  // OUTPUT
  printf("\nOUTPUT:\n");

  displayResults(result);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}