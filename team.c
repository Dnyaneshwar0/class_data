#include<stdio.h>
#include<string.h>
struct player
{
	char name[50];
	char country[50];
	float bat_avg;
};

void sort(struct player *p1, int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(p1[j].bat_avg<p1[j+1].bat_avg)
			{
				float temp=p1[j].bat_avg;
				p1[j].bat_avg=p1[j+1].bat_avg;
				p1[j+1].bat_avg=temp;
				
				char temp_c[50];
				char temp_n[50];
				strcpy(temp_c,p1[j].country);
				strcpy(temp_n,p1[j].name);

				strcpy(p1[j].country,p1[j+1].country);
				strcpy(p1[j].name,p1[j+1].name);

				strcpy(p1[j+1].country,temp_c);
				strcpy(p1[j+1].name,temp_n);
			}
		}
	}
}

int main()
{	
	int n;
	printf("Enter number of players:");
	scanf("%d", &n);
	getchar();
	struct player p[50];
	for(int i=0;i<n;i++)
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
	for(int i=0;i<n;i++)
	{
		printf("Name: %s \nCountry: %s\nBatting Average: %f\n\n",p[i].name,p[i].country,p[i].bat_avg);\
	}
	return 0;
}