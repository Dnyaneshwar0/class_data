#include<stdio.h>
#include<string.h>


int i,j;
char str[100];
void replace(char wrd[10][10], char s_wrd[10], char rplc[10])
{
	for(i=0;i<10;i++)
	{
		
		for(j=0;;)
		
		if(wrd[i]!=s_wrd)
		{
			continue;
		}
		int n=strlen(s_wrd);
		for(j=0;j<n;j++)
		{
			wrd[i][j]==rplc[j];
		}
	}
}

int main()
{
	char src[10], rep[10];
	printf("Enter a sentence: \n");
	scanf("%[^\n]s",str);
	printf("Word to find:");
	scanf("%s",src);
	printf("Word to replace:");
	scanf("%s",rep);

	char words[20][20];
	int len=strlen(str);
	//char temp[100];
	int w_len,index;

	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			index++;
			w_len=0;
			continue;
		}
		words[index][w_len]=str[i];
	}
	//replace(words,src,rep);
	for(i=0;i<sizeof(words);i++)
	{
		printf("%s",words[i]);
	}
}
