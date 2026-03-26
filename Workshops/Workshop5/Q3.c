#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  scanf("%s", str); 
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
 int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Yes");
    else
        printf("No");
	  

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

////Use code C language. The user enters a string (containing no spaces). Your program must determine if the string is a palindrome—meaning it reads the same forward and backward (e.g., "madam" or "racecar").
////Print "Yes" if the string is a palindrome, and "No" if it is not.
////INPUT:
////racecar
////OUTPUT: 
////Yes
////
////INPUT:
////hello
////OUTPUT:
////No
////
////Write code this form: 
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////#include <math.h>
////#include <ctype.h>
////
////int main() {
////  system("cls");
////	printf("\nINPUT:\n");
////  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
////
////
////
////
////  // Fixed Do not edit anything here.
////  printf("\nOUTPUT:\n");
////  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
////
////
////  
////  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
////  printf("\n");
////  system ("pause");
////  return(0);
////}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[100];
//
//    scanf("%s", str);   
//
//    int len = strlen(str);         
//
//    for (int i = 0; i < len / 2; ++i) {
//    	if (str[i] != str[len - 1 - i])
//	}
//	printf("%")
//    	
//	}
//	
//        