/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :12
Title      :Text Reversal Tool for Document Review
Aim        :Write a program that checks if a document (string) is a palindrome by reversing it manually without using built-in functions. This tool could be used for reviewing documents that need to maintain symmetry.
Algorithm 
Step1. Start.
Step2. Declare integer variables `i`, `f`, and `len`.
Step3. Initialize `f = 1` and `len = 0`.
Step4. Declare character arrays `str` and `rev`.
Step5. Read the string `str`.
Step6. Find the length of the string by traversing until the null character `'\0'` is reached.
Step7. Store the length of the string in `len`.
Step8. Initialize `i = 0`.
Step9. Check whether `i < len` if yes step 10 else step 12
Step10.  Store `str[len-1-i]` in `rev[i]`.
Step11.   Increment `i` and goto step 9
Step12. Add the null character `'\0'` at the end of `rev`.
Step13. Display the reversed string.
Step14. Compare each character of `str` with the corresponding character of `rev`.
Step15. If str[i]!=rev[i] then f=0 else step 16
Step16. If `f == 1`, display "It is palindrome".
Step17. Else display "It is not palindrome".
Step18. Stop.

*/
#include<stdio.h>
int main(){
  int i,f=1,len=0;
  char str[100],rev[20];
  printf("Enter the string:");
  scanf("%s",str);
  for(int i=0;str[i]!='\0';i++)
    len++;
  for(i=0;i<len;i++)
    rev[i]=str[len-1-i];
  rev[i]='\0';
   printf("Reverse of string %s\n",rev);
   for(i=0;i<len;i++){
     if(str[i]!=rev[i]){
       f=0;
       break;
      }
    }
    if(f==1)
      printf("it is palindrome\n");
    else
        printf("it is not palindrom\n");
return 0;
}
/*output
Enter the string:malayalam
Reverse of string malayalam
it is palindrome
 */
