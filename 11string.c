/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :11
Title      :String Manipulation Utility
Aim        :Create an application that implements a suite of string functions like concatenation, comparison, and conversion (uppercase to lowercase), which can be applied to a list of user-provided strings.
Algorithm 
Step1. Start.
Step2. Define a function `convert()` to convert a string into lowercase.
Step3. Declare two character arrays `str1` and `str2`.
Step4. Declare an integer variable `c`.
Step5. Read two strings `str1` and `str2`.
Step6. Compare `str1` and `str2`.
Step7. If the comparison result is `0`, display "Two strings are same" else step; 
Step8. Display "Strings are different".
Step9. Concatenate `str2` to `str1` using `strcat()`.
Step10. Display the concatenated string.
Step11. Call the `convert()` function with `str1`.
Step12. In the  function, initialize `i = 0`.
Step13. Check whether `str[i]` is not equal to `'\0'` if yes step else step
Step14. Convert `str[i]` to lowercase using `tolower()`.
Step15. Increment `i` and goto step.
Step16. Display the converted string.
Step17. Stop.

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(char str[]){
int i;
for(i=0;str[i]!='\0';i++)
      str[i]=tolower(str[i]);
printf("After conversion: %s",str);
}
int main(){
  char str1[20],str2[20];
  int c;
  printf("Enter the 1st string:\n ");
  scanf("%s",str1);
  printf("Enter the 2nd string:\n ");
  scanf("%s",str2);
  printf("After comparison\n");
  c=strcmp(str1,str2);
  if(c==0)
        printf("Two strings are same\n");
  else
        printf("Strings are different\n");
  strcat(str1,str2);
  printf("After Concatenation:%s\n",str1);
   convert(str1);
  return 0;
}
/*output
  Enter the 1st string:
 Hello
Enter the 2nd string:
 Hello
After comparison
Two strings are same
After Concatenation:HelloHello
After conversion: hellohello
  */
