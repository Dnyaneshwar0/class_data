#include<stdio.h>
int sumoffactors(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	int sum1=sumoffactors(a);
	int sum2=sumoffactors(b);
	if(sum1==b && sum2==a)
	{
		printf("The numbers %d and %d are Amicable Numbers.\n",a,b);
	}
	else
	{
		printf("The numbers %d and %d are not Amicable Numbers.\n",a,b);
	}
}