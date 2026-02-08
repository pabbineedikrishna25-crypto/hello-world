#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pcode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"Raju",74.8,{"Aditya","brm",534202}};
	printf(" %d %s %2f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
	
}
