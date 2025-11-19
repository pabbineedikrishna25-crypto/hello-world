#include<stdio.h>
int main()
{
	long int n;
	printf("enter any Number");
	scanf("%d",&n);
	fact(n);
	return 0;
}
void fact(long int n)
{
	long int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf(" factorial is = %ld",f);
}
