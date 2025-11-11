#include<stdio.h>
int main()
{
	int a,b,c;
	float average;
	printf("enter a,b,C values:");
	scanf("%d%d%d",&a,&b,&c);
	average=(a+b+c)/3;
	printf("average=%f",average);
	return 0;
}
