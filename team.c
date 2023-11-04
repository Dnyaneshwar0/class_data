#include<stdio.h>
int i;
struct player
{
	char name[50];
	char country[50];
	float bat_avg;
};

void sort(struct player *p1, int n)
{
	for(int j=0;j<n-1;j++)
	{
		float min=p1[j].bat_avg;
		for(int i=j;i<n;i++)
		{
			if(min>p1[i].bat_avg)
			{
				float temp=p1[i].bat_avg;
				p1[i].bat_avg=min;
				min=temp;
			}
		}
		p1[j].bat_avg=min;
	}
}

int main()
{	
	int n;
	printf("Enter number of players:");
	scanf("%d", &n);
	getchar();
	struct player p[50];
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
		scanf("%[^\n]s",p[i].name);
		getchar();
		printf("Enter country:");
		scanf("%[^\n]s",p[i].country);
		getchar();
		printf("Enter batting average:");
		scanf("%f",&p[i].bat_avg);
		getchar();
	}
	sort(p,n);
	printf("\n\nSorted List of Players:\n");
	for(i=0;i<n;i++)
	{
		printf("Name: %s \nCountry: %s\nBatting Average: %f\n\n",p[i].name,p[i].country,p[i].bat_avg);
	}
	return 0;
}