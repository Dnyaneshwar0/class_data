#include<stdio.h>
#include<Windows.h>

int main()
{
	FILE *f=fopen("./struc_id.c","r");
	int ch;
	while((ch=fgetc(f))!=-1)
	{
		printf("%c",ch);
		Sleep(50);
	}
}