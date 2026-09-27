/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :8
Title      :Matrix Multiplication for Image Processing
Aim        :Implement matrix multiplication to apply a transformation matrix to an image. The program should accept a 2D image matrix and a transformation matrix, then output the transformed image.
Algorithm 
Step1. Start.
Step2. Declare matrices `a`, `b`, and `c`.
Step3. Read the rows `r1` and columns `c1` and elements of the first matrix.
Step4. Read the rows `r2` and columns `c2` and elements of the second matrix.
Step5. Check whether `c1` is equal to `r2` if yes step8 else step.
Step6. Display "Not possible" if `c1` is not equal to `r2`.
Step7. Initialize `i` to `0`.
Step8. Check whether `i` is less than `r1` if yes step9 else step19.
Step9. Initialize `j` to `0`.
Step10. Check whether `j` is less than `c2` if yes step11 else step18.
Step11. Initialize `c[i][j]` to `0`.
Step12. Initialize `k` to `0`.
Step13. Check whether `k` is less than `c1` if yes step14 else step17.
Step14. Multiply `a[i][k]` and `b[k][j]`.
Step15. Add the result to `c[i][j]`.
Step16. Increment `k` and goto step13.
Step17. Increment `j`and goto step10.
Step18. Increment `i`and goto step8.
Step19. Display the resultant matrix.
Step20. Stop.

*/
#include<stdio.h>
int main(){
  int i,j,a[10][10],b[10][10],r1,r2,c1,c2;
  int k,c[10][10];
  printf("Enter the noof rows and cols of 1st matrix\n");
  scanf("%d %d",&r1,&c1);
  printf("Enter the data\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
  }
  printf("Enter the noof rows and cols of 2nd matrix\n");
  scanf("%d %d",&r2,&c2);
  printf("Enter the data\n");
  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++)
      scanf("%d",&b[i][j]);
  }
  if(c1!=r2){
    printf("Not possible because c1=r2\n");
    return 0;
  }
  printf("Matrix multiplication\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      c[i][j]=0;
      for(k=0;k<c1;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }}  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++)
      printf("%d\t",c[i][j]);
    printf("\n");
}
  return 0;
}
/*
 Output
Enter the noof rows and cols of 1st matrix
3 3
Enter the data
1 2 3
3 2 1
2 1 3
Enter the noof rows and cols of 2nd matrix
3 3
Enter the data
5 2 5
3 4 3
3 2 5
Matrix multiplication
20      16      26
24      16      26
22      14      28
 */
