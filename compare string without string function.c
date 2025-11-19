#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int l1,l2,i,flag=0;
	printf("enter string 1 Name");
	scanf("%s",s1);
	printf("enter string 2 Name");
	scanf("%s",s2);
	for(i=0;s1[i]!=0;i++);
	l1=i;
	for(i=0;s2[i]!=0;i++);
	l2=i;
	if(l1=l2)
	{
		for(i=0;s1[i]!=0;i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag=0)
	printf("Both strings are equal");
	else
	printf("Both strings are not equal");
	return 0;
}
