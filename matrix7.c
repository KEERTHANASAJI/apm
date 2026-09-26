#include<stdio.h>
int r,c,i,j;
int rsum(int a[r][c]){
  int sum=0;
  for(i=0;ii<r;i++){
    for(j=0;j<c;j++)
      sum+=a[i][j];
    printf("sum of row %d is %d",i,r);
}}
int csum(int a[r][c]){
  4   for(i=0;i<r;i++){
  5     for(j=0;j<c;j++)
  6       r=a[i][j];
  7     printf("sum of row %d is %d",i,r);
  8 }}
  int trace(int a[r][c]){
  4   for(i=0;i<r;i++){
  5     for(j=0;j<c;j++)
  6       r=a[i][j];
  7     printf("sum of row %d is %d",i,r);
  8 }}
  int transpose(int a[r][c]){
  4   for(i=0;i<r;i++){
  5     for(j=0;j<c;j++)
  6       r=a[i][j];
  7     printf("sum of row %d is %d",i,r);
  8 }}
int main(){
  int a[10][10];
  printf("enter no.of rows and columns\n");
  scanf("%d %d",&r,&c);
  printf("enetr data\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  }
  do{
    int c;
    scanf("%d",&c);
    switch(c){
      case 1:
        rsum(&a[r][c]);
        break;
      case 2:
        csum(&a[r][c]);
        break;
      case 3:
        trace(&a[r][c]);
        break;
      case 4:
        transpose(&a[r][c]);
        break;
      case 5:
        printf("Thankyou\n");
        break;
      default:
        printf("invalid\n");
        break;
   }
  }while(c!=5);
  return 0;
}

