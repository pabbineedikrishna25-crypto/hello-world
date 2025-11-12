#include<stdio.h>
int main()
{
	int a[100],n,i,x,mid,low,high;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter x value");
	scanf("%d",&x);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
	if(x==a[mid])
	break;
	else if(x>a[mid])
	low=mid+1;
	else
	high=mid-1;
	mid=(low+high)/2;
	}
	if(x==a[mid])
	printf("element found");
	else
	printf("element not found");
	return 0;
}
