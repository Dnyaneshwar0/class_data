#include<stdio.h>
int i;
int search(int arr1[], int len, int a)
{
	for(i=0;i<len;i++)
	{
		if(arr1[i]==a)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[100];
	printf("Enter number of elements:\n");
	int n;
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter value to be searched:");
	int num;
	scanf("%d",&num);
	int pos=search(arr, n, num);
	if(pos==-1)
	{
		printf("\nValue not found...!!");
	}
	else
	{
		printf("\nValue found at index %d",pos);
	}
	return 0;
}