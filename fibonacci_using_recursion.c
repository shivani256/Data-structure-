#include <stdio.h>
int main()
{
int fibonacci(int n);
int num;
printf("Enter the range to find fibonacci series:");
scanf("%d",&num);
printf("The fibonacci series of the number is:>>>");
printf("0 1 ");
fibonacci(num-2);
}
int fibonacci(int num)
{static int f0=0,f1=1,fib=0;
if(num>0)
{fib=f0+f1;
f0=f1;
f1=fib;
printf("%d ",fib);
fibonacci(num-1);
}}


