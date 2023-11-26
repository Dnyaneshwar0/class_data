#include<stdio.h>
#include<Windows.h>

int main()
{
	FILE *f1=fopen("./Hello1.docx","w");
	FILE *f=fopen("./matrixp_mult.c","r");
	int ch;
	while((ch=fgetc(f))!=-1)
	{
		printf("%c",ch);
		fputc(ch,f1);
		//Sleep(50);
	}

	
	//if(f==NULL)
	fclose(f1);
	return 0;
}