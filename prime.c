/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :2
Title      :Prime Number Finder for Data Processing
Aim        :Write a program that scans a list of numbers and identifies which ones are prime. It should store the prime numbers separately for further processing.
Algorithm 
Step1.Start.
Step2. Declare arrays `nums[10]` and `prm[10]`.
Step3. Read the number of elements `n`.
Step4. Initialize `i` to `0` and `k` to `0`.
Step5. Read each number into `nums[i]`.
Step6. Store `nums[i]` in `num`.
Step7. Initialize `c` to `0` .
Step8. Check divisibility of `num` from `2` to `num/2`.
Step9. Increment `c` if `num` is divisible by a number.
Step10. Stop checking if `c` becomes `1`.
Step11. Store `num` in `prm[k]` if `c` is `0` and `num` is not `1`.
Step12. Increment `k`.
Step13. Increment `i`.
Step14. Repeat until all elements are checked.
Step15. Display the prime numbers stored in `prm`.
Step16.Stop

Code*/
#include<stdio.h>
int main(){
  int i,n=0,nums[10],prm[10];
   int k=0;
   printf("Enter the noof elements:");
  scanf("%d",&n);
  printf("Enter the numbers");
    while(i<n){
      scanf("%d",&nums[i]);
      int num=nums[i];
       int c=0;
        for(int j=2;j<=num/2;j++){
          if(num%j==0){
            c++;
            break;}}
        if(c==0 && num!=1)
          prm[k++]=num;
        i++;}
  for(i=0;i<k;i++)
        printf("%d-prime\n",prm[i]);
  return 0;
}
/*
Output
Enter the noof elements:5
Enter the numbers12 42 2 78 4
2-prime
*/


