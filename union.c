#include<stdio.h>
union student
{
	int rno;
	char name[20];
	float per;
};
int main()
{
	union student s ;
	s.rno=10;
	//s.per=12.5;
	printf("%d",s.rno);
	return 0;
}
