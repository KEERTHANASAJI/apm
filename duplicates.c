/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :5
Title      :Data Cleaning Utility: Remove Duplicates
Aim        :Create a program that takes a list of customer email addresses (stored in an array) and removes any duplicates, ensuring that each email address is only represented once.
Algorithm 
Step1. Start.
Step2. Declare a two-dimensional character array `e[20][20]`.
Step3. Read the number of email addresses `n`and email addresses.
Step4. Initialize `i` to `0`.
Step5. Check whether `i` is less than `n` if yes step6 else step15.
Step6. Initialize `j` to `i+1`.
Step7. Check whether `j` is less than `n` if yes step8 else step13.
Step8. Compare `e[i]` and `e[j]`.
Step9. If both emails are equal, remove the duplicate email.
Step10. Shift the remaining emails one position to the left.
Step11. Decrement `n` and decrement `j`.
Step12. Increment `j` and goto step7.
Step13. Increment `i` and goto step5.
Step14. Display "No duplicates found" if there are no duplicates.
Step15. Display the remaining email addresses otherwise.
Step16.Stop

Code*/
#include<stdio.h>
#include<string.h>
int main(){
  int i,j,n,k;
  char e[20][20];
   printf("Enter the number:\n");
   scanf("%d",&n);
   printf("Enter the emails:\n");
   for(i=0;i<n;i++)
        scanf("%s",e[i]);
   for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
       if(strcmp(e[i],e[j])==0){
         for(k=j;k<n-1;k++)
           strcpy(e[k],e[k+1]);
         n--;
         j--;
       }
     }
   }
   if(n!=k)
     printf("No duplicates Found");
   else{
   printf("After removing duplicates\n");
   for(i=0;i<n;i++)
        printf("%s\n",e[i]);
   }
  return 0;
}
/*output
  Enter the number:
3
Enter the emails:
anu@gmail.com
anna@gmail.com
anu@gmail.com
After removing duplicates
anu@gmail.com
anna@gmail.com
*/
