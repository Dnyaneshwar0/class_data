#include<stdio.h>
int i,j;
int arr[10][10], tnsp[10][10];
void transpose(int r, int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tnsp[j][i]=arr[i][j];
		}
	}
}

void display(int a[][10], int r, int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int rows,cols;
	printf("Enter rows for matrix:");
	scanf("%d", &rows);
	printf("Enter columns for matrix:");
	scanf("%d", &cols);
	printf("\nEnter data:\n");
	for(i=0;i<rows;i++)
	{
		printf("Row %d:\n",i+1);
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);    
		}
	}
	transpose(rows,cols);

	printf("Original matrix:\n");
	display(arr,rows,cols);
	
	printf("Transpose of given matrix:\n");
	display(tnsp,cols,rows);
	


	return 0;
}
	
