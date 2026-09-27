/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :4
Title      :Palindrome Checker for Database Records
Aim        :Write a program to check if a given set of product codes (stored as strings in a database) are palindromes, and generate a report of the results.
Algorithm 
Step1. Start.
Step2. Declare a two-dimensional character array `str[10][20]`.
Step3. Read the number of product codes `n` and product codes.
Step4. Initialize `i` to `0`.
Step5. Check whether `i` is less than `n`if yes step6 else step15. 
Step6. Find the length of the current product code.
Step7. Initialize `f` to `1` and  `j` to `0`.
Step8. Check whether `j` is less than `len/2`if yes step9 else step11 .
Step9. Compare `str[i][j]` with `str[i][len-1]`.
Step10. Set `f` to `0` if the characters are equal.
Step11. Stop the comparison if `f` becomes `0`.
Step12. Display "It is palindrome" if `f` is `0`.
Step13. Display "It is not palindrome" otherwise.
Step14. Increment `i` and goto step5.
Step15.Stop

Code*/
#include<stdio.h>
#include<string.h>
int main(){
  int i,n,k;
  char str[10][20];
  printf("Enter the no.of elements to be entered:");
  scanf("%d",&n);
  printf("Enter the product code:");
  for(i=0;i<n;i++)
    scanf("%19s",str[i]);
  printf("Product code report\n");
  for(i=0;i<n;i++){
    int len=strlen(str[i]);
    int f=1;
    for(int j=0;j<len/2;j++){
        if(str[i][j]==str[i][len-1]){
        f=0;
        break;
      }
    }
    if(f==0)
      printf("it is palindrome %s\n",str[i]);
    else
        printf("it is not palindrom %s\n",str[i]);
    }
   
return 0;
}
/*output
Enter the no.of elements to be entered:3
Enter the product code:102
210
111
Product code report
it is not palindrom 102
it is not palindrom 210
it is palindrome 111
*/
