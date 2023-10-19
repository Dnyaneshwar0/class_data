#include<stdio.h>

int i,j;
int m1[10][10], m2[10][10], sum[10][10];

void input(int arr[10][10], int rows, int cols)
{
	printf("\nEnter Data:\n");
	for(i=0;i<rows;i++)
	{
		printf("\nEnter data for row %d\n",i+1);
		for(j=0;j<cols;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

void display(int arr[10][10], int rows, int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


void add(int r, int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
}

int main()
{
	int rows1,cols1,rows2,cols2;
	printf("Enter rows of matrix 1: \n");
	scanf("%d", &rows1);
	printf("Enter columns of matrix 1: \n");
	scanf("%d", &cols1);
	printf("Enter rows of matrix 2: \n");
	scanf("%d", &rows2);
	printf("Enter columns of matrix 2: \n");
	scanf("%d", &cols2);
	if(rows1!=rows2 || cols1!=cols2)
	{
		printf("Addition not compatible");
	}
	else
	{
		printf("Compatible to add\n");
		input(m1,rows1,cols1);
		input(m2,rows2,cols2);
		add(rows1,cols1);
		display(sum, rows1, cols1);
	}
		return 0;
}
