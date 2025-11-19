#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string Name");
	scanf("%s",s);
	strlwr(s);
	printf("lowercase string=%s",s);
	return 0;
	
}
