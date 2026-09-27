/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :10
Title      :Permutation Generator for Password Cracking Simulation
Aim        :Write a program that generates all possible permutations of a given string, which could simulate a password-cracking tool for security testing.
Algorithm 
Step1. Start.
Step2. Declare a character array `str`.
Step3. Read the string `str`.
Step4. Display "All permutations".
Step5. Call the `permute()` function.
Step6. Check whether `l` is equal to `r` if yes step7 else step8.
Step7. Display the string .
Step8. Initialize `i` to `l`.
Step9. Check whether`i` is less than or equal to `r`if yes step10 else step14.
Step10. Call the `swap()` function.
Step11.Store str[i] in temp.
Step12.Store str[l] in str[i].
Step13.Store temp in str[l].
Step14. Call the `permute()` function with `l+1`.
Step15. Call the `swap()` function goto step11.
Step16. Increment `i`.
Step17. Stop.
*/
#include<stdio.h>
#include<string.h>
void swap(char str[],int i,int j){
char temp;
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
void permute(char str[],int l,int r){
int i;
if(l==r)
  printf("%s\n",str);
else{
  for(i=l;i<=r;i++){
    swap(str,l,i);
    permute(str,l+1,r);
    swap(str,l,i);
  }
}
}
int main(){
  char str[20];
  printf("Enter the string:\n");
  scanf("%s",str);
  printf("All permutatons:\n");
  permute(str,0,strlen(str)-1);
return 0;
}
/*
output
Enter the string:
ABC
All permutatons:
ABC
ACB
BAC
BCA
CBA
CAB
*/
