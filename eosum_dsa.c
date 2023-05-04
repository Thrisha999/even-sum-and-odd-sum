#include<stdio.h>
void main()
{
	int a[20],n,i,esum=0,osum=0;
	printf("Enter the size of an array :");
	scanf("%d",&n);
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			esum = esum + a[i];
		}
		else
		{
			osum = osum + a[i];
		}
		
	}
	printf("Even elements in  an array are :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			printf("a[%d] = %d  ",i,a[i]);
		}
	}
	printf("\n");
	printf("Sum of even numbers in an array is %d\n",esum);
	printf("Odd elements in  an array are :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("a[%d] = %d  ",i,a[i]);
		}
	}
	printf("\n");
	printf("Sum of odd numbers in an array is %d",osum);
}
