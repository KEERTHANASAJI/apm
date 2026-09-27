/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :6
Title      :Dynamic Data Display Pascal's Triangle 
Aim        :Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows.
Algorithm 
Step1. Start.
Step2. Declare integer variables `i`, `s`, `c`, `j`, and `r`.
Step3. Read the number of rows `r`.
Step4. Initialize `i` to `0`.
Step5. Check whether `i` is less than `r` if yes step6 else step18.
Step6. Initialize `s` to `1`.
Step7. Check whether `s` is less than or equal to `r-i` if yes step8 else step11.
Step8. Print a space and Increment `s` goto step7.
Step9. Initialize `j` to `0`.
Step10. Check whether `j` is less than or equal to `i`if yes step11 else step10.
Step11. if `j` is `0` or `j` is `i` if yes step12 else step13.
Step12. Set `c` to `1` .
Step13. Calculate the next value of `c`.
Step14. Display `c`.
Step15. Increment `j` and goto step10.
Step16. Print a new line.
Step17. Increment `i` and goto step5.
Step18. Stop.
*/
#include<stdio.h>
int main(){
  int i,s,c,j,r;
  printf("Enter no of rows:");
  scanf("%d",&r);
  for(i=0;i<r;i++){
    for(s=1;s<=r-i;s++)
      printf(" ");
    for(j=0;j<=i;j++){
      if(j==0 || j==i)
        c=1;
      else
        c=c*(i-j+1)/j;
    printf("%d ",c);}
    
      printf("\n");
  }    return 0;
  }
/*output
  Enter no of rows:4
    1
   1 1
  1 2 1
 1 3 3 1
 */
