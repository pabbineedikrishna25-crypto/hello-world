#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	struct student s[100];
	int n,i;
	float per;
	printf("enter no of students");
	scanf("%d",&n);
	printf("enter student details");
	for(i=0;i<n;i++)
	{
		printf("enter student  name");
		scanf("%s",&s[i].name);
		printf("enter student rollno");
		scanf("%d",&s[i].rno);
		printf("enter student percentage");
		scanf("%f",&s[i].per);
		s[i].per=per;
	}
	printf("\n display student details");
	for(i=0;i<n;i++)
	{
	printf("\n %d %s %f",s[i].rno,s[i].name,s[i].per);
    }
	return 0;
}
