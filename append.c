#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f;
	f=fopen("./data.txt","a");
	//if(f==NULL)
	printf("Enter string:");
	
	char str[100];
	scanf("%s",str);
	fputs(str,f);
	fclose(f);
	return 0;
}