/*
   Algorithm
   step 1:Start
   Step 2:Declare a character arraystr[20] and integer i
   Step 3:Display "Text Analysis Tool"
   Step 4:Display enetr a string
   Step 5:Read the string str
   Step 6:set i=0
   step 7:Check whther str[i] is \0 or \n if yes step else step 15  Step 8:Check whether str[i] is an alphsbet
   Step 9:Ifv yes convert str[i] to lowercase
   Step 10:Check whether str[i] is a e i o or u
   Step 11:If yes display the character as a vowel else display constsnt
   Step 12:Check whether str[i] is a digit
   Step 13:If yes display as number else display special character
   Step 14:Increment i by 1 and goto step 7
   Step 15:Stop

   */

#include<stdio.h>
#include<ctype.h>
int main(){
  char str[20];
  int i=0;
  printf("Text Analysis Tool");
  printf("Enter the string:\n");
  fgets(str,sizeof(str),stdin);
  while(str[i]!='\0' &&  str[i]!='\n'){
   if(isalpha((unsigned char)str[i])){
    str[i]=tolower(str[i]);
    switch(str[i]){
    case 'a':
        printf("%c-vowel\n",str[i]);
        break;
    case 'e':
        printf("%c-vowel\n",str[i]);
        break;
    case  'i':
        printf("%c-vowel\n",str[i]);
        break;
    case 'o':
        printf("%c-vowel\n",str[i]);
        break;
    case 'u':
        printf("%c-vowel\n",str[i]);
        break;
    default:
        printf("%c-consonant\n",str[i]);
    }}
    else if(isdigit((unsigned char)str[i]))
        printf("%c-number\n",str[i]);
    else
        printf("%c-special\n",str[i]);
    ++i;}
  return 0;
}
/*output
  Text Analysis ToolEnter the string:
anna@12
a-vowel
n-consonant
n-consonant
a-vowel
@-special
1-number
2-number
*/
