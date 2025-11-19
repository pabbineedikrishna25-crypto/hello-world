#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int l,i;
	printf("enter string 1 and 2 Names");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++);
	l=i;
	for(i=0;s2[i]!=0;i++)
	{
		s1[l++]=s2[i];
	}
	s1[l]='\0';
	printf("combined string= %s",s1);
	return 0;
	
}
