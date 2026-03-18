#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, j;
  scanf("%d", &n);
  char names[n][50], temp[50];
   for(i = 0; i < n; i++){
   	scanf("%s", names[i]);	
   }
   
   for(i = 0; i < n-1; i++){
   	for(j = 0; j < n-i-1; j++){
   		if(strcmp(names[j], names[j+1]) > 0){
   			strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
		   }
	   }
	   
   }
        
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  for(i = 0; i < n; i++){
        printf("%s\n", names[i]);
    }

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

