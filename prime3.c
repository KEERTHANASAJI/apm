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

    
                
