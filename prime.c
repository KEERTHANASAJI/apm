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



