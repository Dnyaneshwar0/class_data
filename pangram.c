#include<stdio.h>
#include<string.h>

void count(char arr[], int c[2][26])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        for(int j=0;j<26;j++)
        {
            if(arr[i]==(65+j)||arr[i]==(97+j))
            {
                c[1][j]++;
            }
        }
    }
}

void check(int cnt[2][26])
{
    for(int i=0;i<26;i++)
    {
        if(cnt[1][i]==0)
        {
            printf("Not a pangram");
            return;
        }
    }
    printf("It is a pangram");
}

int main()
{
    char str[100];
    printf("Enter string:\n");
    scanf("%[^\n]s",str);
    int num[2][26];
    for(int i=0;i<26;i++)
    {
        num[0][i]=i+65;
        num[1][i]=0;
    }
    count(str,num);
    check(num);
}