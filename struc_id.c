#include<stdio.h>

struct login
{
	char username[100];
	char password[20];
};
struct students
{
	char name[100];
	int id;
	char division;
	struct login l;
};
int main()
{
	printf("Enter number of students:\n");
	int n;
	scanf("%d",&n);
	getchar();
	struct students s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter student name:\n");
		scanf("%[^\n]s",s[i].name);
		getchar();
		printf("Enter ID:\n");
		scanf("%d", &s[i].id);
		getchar();
		printf("Enter division:\n");
		scanf("%c", &s[i].division);
		getchar();
		printf("Enter username:\n");
		scanf("%s", s[i].l.username);
		getchar();
		printf("Enter password:\n");
		scanf("%s", s[i].l.password);
		getchar();
	}
	printf("\n\nStudents data:\n");
	for(i=0;i<n;i++)
	{
		printf("%s, %d, %c, %s, %s\n", s[i].name, s[i].id, s[i].division, s[i].l.username, s[i].l.password);
	}
	return 0;
}