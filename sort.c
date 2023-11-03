#include<stdio.h>

void sort(int arr1[], int n)
{
    for(int j=0;j<n-1;j++)
    {
        int min=arr1[j];
        for(int i=j;i<n;i++)
        {
            if(min>arr1[i])
            {
                int temp=arr1[i];
                arr1[i]=min;
                min=temp;
            }
        }
        arr1[j]=min;
    }
}
int main()
{
    int arr[100];
    int n,i;
    printf("Enter number of values:\n");
    scanf("%d",&n);
    printf("Enter values in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, n);
    printf("\nSorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}