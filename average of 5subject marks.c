#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float average;
	printf("enter subjectwise marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("total=%d",total);
	average=(s1+s2+s3+s4+s5)/5;
	printf("average=%f",average);
	return 0;
}
