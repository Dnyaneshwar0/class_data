#include<stdio.h>
int ch=0;
int num;
void func(int n, int dif)
{
	printf("%d ",n+dif);
	n+=dif;
	if(n<=0)
	{
		ch=1;
	}
	if(n>0 && ch==0)
	{
		func(n,-5);
	}
	else if(n!=num)
	{
		func(n,5);
	}
}
int main()
{
	int n;
	printf("Enter value of n:\n");
	scanf("%d",&num);
	func(num, 0);
	return 0;
}