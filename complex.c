/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :15
Title      :Complex Number Calculator for Engineering Simulations
Aim        :Develop a program that allows the user to input two complex numbers and calculates their sum and difference. This program could be applied in simulations for electrical engineering or physics problems.
Algorithm 
Step1.Start
Step2. Define a structure named `complex`.
Step3. Declare `real` and `img` as members of the structure.
Step4. Declare two complex numbers `c[2]`and complex numbers `s` and `d`.
Step5. Declare an integer variable `i`.
Step6. Set `i = 0`.
Step7. Check whether `i < 2`if yes step 8 else step
Step8. If yes, display enter the real and imaginary parts.
Step9. Read the real and imaginary parts of `c[i]`.
Step10. Increment `i` by 1 and goto Step 7.
Step11. Add  real part of `c[0]` and `c[1]`and  Store the result in `s.real`.
Step12. Add  imaginary part of `c[0]` and `c[1] and Store the result in `s.img`.
Step13. Subtract the real part of `c[1]` from `c[0]`and Store the result in `d.real`.
Step14. Subtract the imaginary part of `c[1]` from `c[0]`and Store the result in `d.img`.
Step15. Display the sum .
Step16. Display the difference.
Step17. Stop.
   */

#include<stdio.h>
struct complex{
int real;
int img;
}c[2],s,d;
int main(){
  int i;
  for(i=0;i<2;i++){
    printf("Enter the real and imaginary part:\n");
    scanf("%d %d",&c[i].real,&c[i].img);
  }
 s.real=c[0].real+c[1].real;
 s.img=c[0].img+c[1].img;
 d.real=c[0].real-c[1].real;
 d.img=c[0].img-c[1].img;
 printf("Sum of two complex numbers:%d+%di\n",s.real,s.img);
 printf("Difference of two complex numbers:%d+%di\n",d.real,d.img);

return 0;
}
/*output
Enter the real and imaginary part:
4 10
Enter the real and imaginary part:
2 4
Sum of two complex numbers:6+14i
Difference of two complex numbers:2+6i
*/
