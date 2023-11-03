#include <stdio.h>
int isPrime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
    printf("Enter range for prime numbers (starting and ending number inclusive):\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("List of Primes: ");
    for(int i=a;i<=b;i++)
    {
    	if(isPrime(i)==0)
    	{
    		printf("%d ",i);
    	}
    }
    return 0;
}