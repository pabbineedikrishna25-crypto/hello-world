#include<stdio.h>

struct student
{
	int rno;
	char name[10];
	float per;
} s1={101,"Raju",79.50},s2;
void display(struct student);
int main()
{
	struct student s3={103,"Rani",89.00};
	printf(" enter student 2 values");
	scanf("\n %d %s %f",&s2.rno,&s2.name,&s2.per);
	display(s1);
	display(s2);
	display(s3);
	return 0;
}
void display(struct student s)
{
	printf("\n %d %s %f",s.rno,s.name,s.per);
}

