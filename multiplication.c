#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a &b values");
	scanf(" %d %d",&a,&b);
	printf("enter your choice +add -sub ");
	scanf(" %c",&ch);
	switch(ch)
	{
	case '+':c=a+b;
	         printf("sum=%d",c);
	         break;
	case  '-':c=a-b;
	          printf("sub=%d",c);
	          break;
}  
	return 0;			 		           
}
