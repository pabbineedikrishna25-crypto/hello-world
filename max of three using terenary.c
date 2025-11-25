#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a&b&c values");
	scanf("%d  %d %d",&a,&b,&c);
    a>b?(a>c)?a:c:(b>c)?b:c;
	printf("maximum of three numbers=%d",max);
	return 0;
}

