#include<stdio.h>
void rev(char str[],int s){
int i,j;
if(str[s]=='\n' || str[s]=='\0')
  return;
for(i=s;str[i]!=' ' && str[i]!='\n' && str[i]!='\0';i++);
  rev(str,i+1);
for(j=s;j<i;j++)
  printf("%c",str[j]);
printf(" ");
}
int main(){
  char str[50];
  printf("Enter the string\n");
  fgets(str,sizeof(str),stdin);
  rev(str,0);
  return 0;
}
/*output
   Enter the string
   hai good morning
   morning good hai
  */

