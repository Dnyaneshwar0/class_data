#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;
	f=fopen("./Hello1.doc","w");
	//if(f==NULL)
	fputs("123456789 Hello.",f);
	fclose(f);
	return 0;
}