/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :9
Title      :Symmetry Checker for Geometric Designs
Aim        :Develop a program to check if a given design (represented as a matrix) is symmetric. This program can be useful for analyzing symmetry in architectural or geometric design patterns.
Algorithm 
Step1. Start.
Step2. Declare a matrix `mat[10][10]`.
Step3. Read the number of rows `r`and number of columns `c`.
Step5. Check whether `r` is equal to `c` if yes step6 else step7.
Step6. Display "Matrix is not symmetry".
Step7. Read the elements of the matrix.
Step8. Initialize `i` to `0`.
Step9. Check whether `i` is less than `r`if yes step10 else step14.
Step10. Initialize `j` to `0`.
Step11. Check whether `j` is less than `c`if yes step12 else step9.
Step12. Compare `mat[i][j]` with `mat[j][i]`.
Step13. Display "Not symmetry" if they are not equal.
Step14. Display "Symmetry" if all corresponding elements are equal.
Step15. Stop.

Code*/
#include<stdio.h>
int main(){
  int i,j,c,r,mat[10][10];
  printf("Enter the noof rows and cols\n");
  scanf("%d %d",&r,&c);
  if(r!=c){
    printf("Matrix is not symmetry\n");
    return 0;
}
  printf("Enter the elemnts of matrix\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++)
      scanf("%d",&mat[i][j]);
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(mat[i][j]!=mat[j][i]){
        printf(" Not symmetry\n");
        return 0;
      }  
    }
  }
 printf("Symmetry\n");
  return 0;
}
/*output
Enter the noof rows and cols
3 3
Enter the elemnts of matrix
1 2 3
2 4 5
3 5 6
Symmetry
*/
