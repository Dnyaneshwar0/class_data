#include<stdio.h>

int main()
{
	int arr[10],n;
	printf("Enter length of array:\n");
	scanf("%d",&n);
	printf("Enter values:\n");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n/2;i++)
	{		

		int *p1=arr+i,*p2=arr+(n-i-1);
		int temp=*p1;
		arr[i]=*p2;
		arr[n-i-1]=temp;
	}
	printf("Reversed array:\n");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}