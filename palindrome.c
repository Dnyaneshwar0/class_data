#include<stdio.h>
#include<string.h>
int i;
int isPalindrome(char orig[50])
{
	int len=strlen(orig);
	for(i=0;i<len/2;i++)
	{
		if(orig[i]!=orig[len-i-1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[50];
	printf("Enter a string:\n");
	scanf("%s",str);
	if(isPalindrome(str))
	{
		printf("%s is Palindrome", str);
	}
	else
	{
		printf("%s is not Palindrome", str);
	}
	return 0;
}