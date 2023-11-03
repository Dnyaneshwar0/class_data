#include<stdio.h>
int mult(int a, int b)
{
	int prod=1;
	prod*=a;
	if(b>1)
	{
		prod*=mult(a,b-1);
	}
	return prod;
}
int main()
{
	int x, n, ans;
	printf("Enter value of base and power:");
	scanf("%d%d", &x, &n);
	ans=mult(x,n);
	printf("Value of %d raised to %d = %d",x,n,ans);
	return 0;
}