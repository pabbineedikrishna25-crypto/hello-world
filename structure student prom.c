#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
}s1={101,"raju",34.22},s2;
int main()
{
	struct student s3={103,"ram",22.10},s4;
	s2.rno=102;
	strcpy(s2.name,"priya");
	s2.per=98.00;
	printf("enter student 4 name");
	scanf("%s",&s4.name);
	printf("enter student 4 roll.no");
	scanf("%d",&s4.rno);
	printf("enter student 4 percentage");
	scanf("%f",&s4.per);
	printf("%d %s %f",s1.rno,s1.name,s1.per);
	printf("\n%d %s %f",s2.rno,s2.name,s2.per);
	printf("\n%d %s %f",s3.rno,s3.name,s3.per);
	printf("\n%d %s %f",s4.rno,s4.name,s4.per);
	return 0;
	
	
}
