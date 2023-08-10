#include <stdio.h>
int binarySearch(int a[], int beg, int end, int val)
{
int mid;
if(end >= beg)
{
mid = (beg + end)/2;
if(a[mid] == val)
{return mid+1;}
else if(a[mid] < val)
{return binarySearch(a, mid+1, end, val);}
else
{return binarySearch(a, beg, mid-1, val);}
}
return -1;
}


int main() 
{
int a[20],ele,n,i;
printf("Enter the number of elements to be created:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("\n Enter the Element to be searched:");
scanf("%d", &ele);
int res = binarySearch(a, 0, n-1,ele);
printf("The elements of the array are - ");
for (int i = 0; i < n; i++)
printf("%d ", a[i]);
printf("\nElement to be searched is - %d",ele);
if (res == -1)
printf("\nElement is not present in the array");
else
printf("\nElement is present at %d position of array", res);
return 0;
}
