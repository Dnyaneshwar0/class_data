#include<stdio.h>

int term(int n1, int n2, int n)
{
	int sum=0;
	sum+=n1+n2;
	if(n==1)
	{
		return sum;
	}
	sum+=term(n2,sum,n-1);
}

int main()
{
	int a=0,b=1,n,ans;
	printf("Enter term:\n");
	scanf("%d", &n);
	if(n==1)
	{
		ans=0;
	}
	else if(n==2||n==3)
	{
		ans=1;
	}
	else
	{
		ans=term(a,b,n-2);
		printf("Term %d = %d", n,ans);
	}
	return 0;
}	