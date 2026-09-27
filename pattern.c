/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :6
Title      :Dynamic Data Display Patterns
Aim        :create a pattern generator (e.g., number or star pattern) that can be customized with user input.
Algorithm 
Step1. Start.
Step2. Declare integer variables `i`, `j`, and `r`.
Step3. Read the number of rows `r`.
Step4. Initialize `i` to `0`.
Step5. Check whether `i` is less than `r` if yes step6 else step.
Step6. Initialize `j` to `0`.
Step7. Check whether `j` is less than `r`if yes step8 else step.
Step8. Check whether `i` is `0`or`i` is `r-1`or`j` is `r-i-1`if yes step9 else step10.
Step9. Print `*` .
Step10. Print a space .
Step11. Increment `j` and goto step7.
Step12. Print a new line.
Step13. Increment `i` and goto step5.
Step14. Stop.
*/
#include<stdio.h>
int main(){
int i,j,r;
printf("Enter the noof rows:");
scanf("%d",&r);
for(i=0;i<r;i++){
  for(j=0;j<r;j++){
    if(i==0 || i==r-1 || j==r-i-1)
        printf("*");
    else
        printf(" ");}
 printf("\n");
}
  return 0;
}
/*output
Enter the noof rows:4
****
  *
 *
****
*/
