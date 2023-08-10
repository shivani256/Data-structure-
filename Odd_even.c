#include <stdio.h>
int main()
{
int i,a[10];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe even numbers are:");
for(i=0;i<10;i++)
{
if(a[i]%2==0)
{
printf("%d",a[i]);
}
printf(" ");
}
printf("\nThe odd numbers are:");
for(i=0;i<10;i++)
{
if(a[i]%2!=0)
{
printf("%d",a[i]);
}
printf(" ");
}
}

