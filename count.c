#include<stdio.h>
#include<string.h>

int i,words=0,vow=0,cons=0,len;
void count_val(char arr[100])
{
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		int asc=arr[i];
		if(arr[i]==' ')
		{
			words++;
		}
		else if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U')
		{
			vow++;
		}
		else if((asc>96 && asc<122) || (asc>64 && asc<91))
		{
			cons++;
		}
	}
}

int main()
{
	char str[100];
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	count_val(str);
	printf("\nNo. of Characters = %d \nNo. of Words = %d \nNo. of Vowels = %d \nNo. of Consonants = %d", len,words+1,vow,cons);
	return 0;
}