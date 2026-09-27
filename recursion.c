/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :14
Title      :Recursion-Based Sentence Reversal for Voice Transcription
Aim        :Write a program that reverses the words of a sentence, using recursion. This could be applied in a speech-to-text application where the order of words needs to be reversed for analysis.
Algorithm  
Step 1. Start
Step 2. Declare a character array `str[50]`.
Step 3. Read the sentence and store in str
Step 4. Call the function `rev(str, 0)`.
Step 5. Set `i` to `s`.
Step 6. Check whether `str[s]` is `'\n'` or `'\0'`if yes return else step 7
Step 7. Find the position of the next space, newline, or null character using `i`.
Step 8. Call function `rev(str, i+1)`.
Step 9. Set `j` to `s`.
Step 10. Check whether j<i if yes step 11 else step 13
Step 11. Print the character at position `j`.
Step 12. Increment `j`and goto step 10
Step 13. Print a space.
Step 14. Return from the function.
Step 15. Stop.
*/
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

