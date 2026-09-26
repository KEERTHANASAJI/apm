/*
   Algorithm
Step1:Start.
Step2:Declare variables p, l, l, subl, i.
Step3:Declare strings str and sub.
Step4:Read the main string str substring sub and insertion position p.
Step5:Find the lengths of str and sub.
Step6:Set i = l.
Step7:Check whether  i >= p if yes step8 else step10
Step8:Shift str[i] to str[i+subl].
Step9:Decrement i by 1 goto step7.
Step10:Set i = 0.
Step11:Check whether i < subl if yes step12 else step13.
Step12:Insert sub[i] into str[p+i].
Step13:Increment i by 1 goto step11 else step14.
Step14:Display the resulting string.
Step15:Stop.
   */
#include<stdio.h>
#include<string.h>
int main(){
  int p,i,l,subl;
  char str[50],sub[20];
  printf("Enter string:\n");
  scanf("%s",str);
  printf("Enter substring:\n");
  scanf("%s",sub);
  printf("Enter position\n");
  scanf("%d",&p);
  l=strlen(str);
  subl=strlen(sub);
  for(i=l;i>=p;i--)
    str[i+subl]=str[i];
  for(i=0;i<subl;i++)
    str[p+i]=sub[i];
  printf("After insertion %s\n",str);
  return 0;
}
/*output
Enter string:
Goodall
Enter substring:
morning
Enter position
4
After insertion goodmorningall

*/
