#include<stdio.h>
#include<string.h>

char words[50][20];
int i, j, ind;
void seperate(char arr[])
{
    int w_len;
    while(arr[i]!='\0')
    {
        if(arr[i]==' ')
        {   
            words[ind][w_len]='\0';  
            ind++;
            w_len=0;
        }
        else
        {
            words[ind][w_len]=arr[i];
            w_len++;
        }
        i++;
    }
}
void display()
{
    for(i=0,j=0;i<=ind;i++)
    {
        printf("%s ", words[i]);
    }
}
void replace(char srch[], char rplc[])
{
    int wrd_len,ch;
    for(i=0;i<ind;i++)
    {
        ch=0;
        for(j=0;srch[j]!='\0';j++)
        {
            if(words[i][j]!=srch[j])
            {
                ch=1;
                break;
            }
        }
        if(ch==0)
        {
            j=-1;
           do
            {
                ++j;
                words[i][j]=rplc[j];
            }while(rplc[j]!='\0');
        }
    }
}
int main()
{
    char str[100], src[50],rpl[50];
    int s_len, r_len;
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",str);
    seperate(str);
    printf("Word to Search:\n");
    scanf("%s",src);
    printf("Word to Replace:\n");
    scanf("%s",rpl);
    replace(src,rpl);
    display();
    return 0;
}