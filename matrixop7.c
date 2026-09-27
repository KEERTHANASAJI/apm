/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :7
Title      :Matrix Operations for Financial Modeling
Aim        :Write a program to perform matrix operations that calculate the row sum, column sum, and diagonal sum of a financial transaction matrix. Additionally, include a function to transpose the matrix for further analysis.
Algorithm 
Step1. Start.
Step2. Declare a matrix `a[10][10]`.
Step3. Read the number of rows `r`,number of columns `c`and matrix elements.
Step4. Initialize `rsum` to `0`.
Step5. Calculate the sum of each row.
Step6. Display each row sum.
Step7. Initialize `csum` to `0`.
Step8. Calculate the sum of each column.
Step9. Display each column sum.
Step10. Initialize `t` to `0`.
Step11. Check the diagonal elements of the matrix.
Step12. Add the diagonal elements to `t`.
Step13. Display the trace of the matrix.
Step14. Call the `transpose()` function.
Step15. Initialize `i` to `0`.
Step16. Check whether `i` is less than `c` if yes step19 else step23.
Step17. Initialize `j` to `0`.
Step18.Check whether `j` is less than `r` if yes step21 else step22.
Step19. Display `a[j][i]`.
Step20. Increment `j`and goto step18.
Step21. Increment `i` and goto step20.
Step22. Stop.

Code*/
#include<stdio.h>
int i,j,a[10][10];
  int transpose(int r,int c){
    printf("transpose:\n");
     for(i=0;i<c;i++){
       for(j=0;j<r;j++){
                printf("%d\t",a[j][i]);
        }
    printf("\n");
     }}
int main(){
  int rsum,csum,t=0,r,c;
  printf("enter no.of rows and columns\n");
  scanf("%d %d",&r,&c);
  printf("enetr data\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);}
for(i=0;i<r;i++){
        rsum=0;
       for(j=0;j<c;j++){
                rsum+=a[i][j];}
       printf("sum of row %d is %d\n",i+1,rsum);}
for(j=0;j<c;j++){
  csum=0;
  for(i=0;i<r;i++){
      csum+=a[i][j];}
  printf("sum of col %d is %d\n",j+1,csum);
}
for(i=0;i<r;i++){
         for(j=0;j<c;j++){
           if(i==j)
                t+=a[i][j];
         }}
printf("trace= %d\n",t);
transpose(r,c);
return 0;}
/*output
enter no.of rows and columns
3 3
enetr data
1 2 4
2 5 6
3 7 1
sum of row 1 is 7
sum of row 2 is 13
sum of row 3 is 11
sum of col 1 is 6
sum of col 2 is 14
sum of col 3 is 11
trace= 7
transpose:
1	2	3	
2	5	7	
4	6	1	
  */
