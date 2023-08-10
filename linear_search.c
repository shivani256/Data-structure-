#include<stdio.h>
int main(){
int i,ele;
int arr[10];
printf("Enter 10 elements:");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Enter the Element to be searched:");
scanf("%d", &ele);
int pos,flag=0;
for(i=0;i<10;i++)
{if(arr[i]==ele)
{flag=1;
pos=i;
break;}
}
if(flag==1)
{printf("Element is found at Position %d", pos+1);}
else
{printf("Element not found");}
}

