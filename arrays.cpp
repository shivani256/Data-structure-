#include<stdio.h>
int main()
{
	int n,a,arr[10],i,b,flag,c;
	char ch;
	
	do
	{
	printf("1 create an array ");
	printf("\n2 search an element in  array ");
	printf("\n3 delete an element in  array ");
	printf("\n4 display an array ");
	printf("\nenter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
			case 1:
			printf("enter no of ele in array : ");
			scanf("%d",&a);
			for(i=0;i<a;i++)
			{
				scanf("%d",&arr[i]);
			}
			for(i=0;i<a;i++)
			{       
        		printf("%d\n", arr[i]);
    		}
    		break;
		
			case 2:
			flag=0;
			printf("enter no of ele to search in array : ");
			scanf("%d",&b);
			if(b>=a)
			{
				printf("\n Invalid Location::");
			}
			else
			{
			for(i=0;i<a;i++)
			{
				if(arr[i]==b)
				{
					flag=1;
					break;
				}
			}
			if(flag=1)
			{
				printf("%d",i+1);
			}
			else
			{
				printf("not found");
			}
		
			}
			break;
			
			case 3:
			printf("enter element to delete : ");
			scanf("%d",&c);
			for(i=0;i<a;i++)
			{
				if (c>=a+1)
				{  
    			printf("Deletion not possible.\n");
    			}
    			else
    			{    
        			for (i=c-1;i<a-1;i++) 
        			arr[i] = arr[i+1];
				}
			
		
			}
			printf("array after deletion.....\n");
			for(i=0;i<a;i++)
			{       
        	printf("%d\n", arr[i]);
    		}

			break;
		
			case 4:
			printf("displaying the array.....\n");
			for(i=0;i<a;i++)
			{       
        	printf("%d\n", arr[i]);
    		}
			break;
			default:
			printf("enter valid choice");
	}
printf("do u want to continue");
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
}
