#include <stdio.h>
int n,i,array[10],search;
int binary(int array[],int search,int low,int high)
{
  while(low<=high) 
  {
    int mid=low+(high-low)/2;

    if(array[mid] == search)
      return mid;
  
    else if(array[mid] < search)
      low=mid+1;
      

    else
      high=mid-1;
  }

  return -1;
}

int main() 
{
	
  	printf("enter no of elements in array ");
	scanf("%d",&n);
	printf("enter elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter element to search : ");
	scanf("%d",&search);
  int result = binary(array,search,0,n-1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result+1);
  return 0;
}
