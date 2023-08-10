#include <stdio.h>
int main()
{
int i=1,fact=1,num;
printf("Enter the number to find factorial:");
scanf("%d",&num);
while(i<=num)
{
 fact=fact*i;
 i++;
 }
 printf("The factorial of the given number is %d",fact);
 }
