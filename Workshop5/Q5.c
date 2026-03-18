#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   char str[100], find, replace;
    int i, count = 0;
    scanf("%s", str);
    getchar();
    scanf("%c", &find);
    getchar();
    scanf("%c", &replace);
    getchar();
    
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == find) {
            str[i] = replace;
            count++;
         }
    }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
   printf("%d\n", count);
    printf("%s\n", str);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

