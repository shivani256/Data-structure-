#include <stdio.h>
int main()
{
int i,j,k,a[10][10],b[10][10],mul[10][10],r,c;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enter the number of column:");
scanf("%d",&c);
printf("Enter the elements of matrix 1:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}}
printf("Enter the elements of matrix 2:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}}
printf("The elements of matrix 1:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
printf("     ");}
printf("\n");
}
printf("The elements of matrix 2:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",b[i][j]);
printf("     ");}
printf("\n");
}
printf("The product of the matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",mul[i][j]);
printf("     ");}
printf("\n");
}
}








