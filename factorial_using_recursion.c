#include <stdio.h>
int main()
{
int fact(int num);
int num,ans;
printf("Enter the number to find factorial:");
scanf("%d",&num);
ans=fact(num);
printf("The factorial of the given number is %d",ans);
}
int fact(int num)
{
if(num==1)
{
return 1;
}
else
{
return num*fact(num-1);
}
}
