#include<stdio.h>
int i,j;
int m1[10][10], m2[10][10], prod[10][10];
void multiply(int r1, int r2, int c1, int c2)
{
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(int t=0;t<c1;t++)
            {
                *(*(prod+i)+j) += (*(*(m1+i)+t)) * (*(*(m2+t)+j)); // (m1[i][t]*m2[t][j])
            }
        }
    }
}
void display(int arr[10][10], int r, int c)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(arr+i)+j)); //arr[i][j])
        }
        printf("\n");
    }
    printf("\n");
}
void input(int arr[10][10], int r, int c)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(arr+i)+j); // arr[i][j];
        }
    }
}
int main()
{
    int rows1,rows2,cols1,cols2;
    printf("Enter rows and columns of first matrix:\n");
    scanf("%d%d",&rows1, &cols1);
    printf("Enter rows and columns of second matrix:\n");
    scanf("%d%d",&rows2, &cols2);
    if(cols1==rows2)
    {
        printf("Enter data for first matrix:\n");
        input(m1, rows1, cols1);
        printf("Enter data for second matrix:\n");
        input(m2, rows2, cols2);
        multiply(rows1,rows2,cols1,cols2);
        printf("Multiplication complete.\nOriginal matrices:\n");
        display(m1, rows1, cols1);
        display(m2, rows2, cols2);
        printf("Product:\n");
        display(prod, rows1, cols2);
    }
    else
    {
        printf("Multiplication not possible with these dimensions.");
    }
}