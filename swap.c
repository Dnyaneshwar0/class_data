#include<stdio.h>

void swap(int *p1, int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main()
{
	printf("Enter two numbers:");
	int a ,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Swapped numbers: %d and %d",a,b);
	return 0;
}