/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :3
Title      :Efficient Prime Number Generation
Aim        :Implement the Sieve of Eratosthenes algorithm to generate a list of prime numbers up to a specified upper limit (e.g., 10,000). This list will be used for efficient lookups in a mathematical application.
Algorithm 
Step1. Start.
Step2. Read the limit `n`.
Step3. Declare a Boolean array `pr[100]`.
Step4. Set `pr[0]` to `0` and `pr[1]` to `0`.
Step5. Initialize `i` to `2`.
Step6. Check whether i<=n if yes step7 else step9
Step7. Set `pr[i]` to `1` .
Step8. Increment i goto step6
Step9. Initialize `i` to `2`.
Step10. Check whether `i*i < n` if yes step11 else step17
Step11. Check whether `pr[i]` is `1`.
Step12. Set `j` to `i*i`.
Step13. Check whether j<=n if yes step7 else step16
Step14. Set `pr[j]` to `0`.
Step15. Increment `j` by `i`.
Step16. Increment `i`.
Step17. Check each number from `2` to `n`.
Step18. Display the number if `pr[i]` is `1`.
Step19.Stop

Code*/
#include<stdio.h>
#include<stdbool.h>
int main(){
  int n,j,i;
  bool pr[100];
  printf("Enter the limit:");
  scanf("%d",&n);
  pr[0]=0;
  pr[1]=0;
  for(i=2;i<=n;i++)
    pr[i]=1;
  for(i=2;i*i<n;i++){
    if(pr[i]==1){
        for(j=i*i;j<=n;j+=i)
                pr[j]=0;
   }}
  printf("Prime numbers upto %d\n",n);
  for(i=2;i<=n;i++){
        if(pr[i]==1)
          printf("%d\t",i);
  }
return 0;
}
/*
Output
Enter the limit:50
Prime numbers upto 50
2       3       5       7       11      13      17      19      23      29      31      37      41      43      47
*/
                
