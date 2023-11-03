#include<stdio.h>

int mult(int n)
{
	int fact=1;
	fact*=n;
	if(n>1)
	{
		fact*=mult(n-1);
	}
	return fact;
}

int main()
{
	int num, ans;
	printf("Enter number to calculate factorial:");
	scanf("%d", &num);
	ans=mult(num);
	printf("Factorial of %d = %d",num,ans);
	return 0;
}