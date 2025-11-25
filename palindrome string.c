#include<stdio.h>
int main()
{
	char s1[20];
	int l,i,j,flag=0;
	printf("enter string 1 Name");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++);
	l=i;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s1[i]!=s1[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%s is a palindrome",s1);
	else
	printf("%s is not a palindrome",s2);
	return 0;
	
}
