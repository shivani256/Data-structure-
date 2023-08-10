#include <stdio.h>
int main()
{
int num,f0=0,f1=1,fib=0,i=2;
printf("Enter the range to find fibonacci series:");
scanf("%d",&num);
printf("The fibonacci series of the number is:>>>");
printf("%d %d ",f0,f1);
while(i<num)
{fib=f0+f1;
f0=f1;
f1=fib;
printf("%d ",fib);
i++;
}
}

