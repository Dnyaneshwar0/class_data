#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    int num=0;
    for(int i=0;i<10;i++)
    {
        int count=0;
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j] && !(i==j))
            {
                count++;
                break;
            }
        }
        if(count>0)
        {
            num++;
        }
    }
    printf("\nNo. of non repeating elements: %d",num);
}