#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 Name");
	scanf("%s",s1);
	printf("enter string 2 Name");
	scanf("%s",s2);
	strcat(s1,s2);
	printf("combined string=%s",s1);
	return 0;
}
