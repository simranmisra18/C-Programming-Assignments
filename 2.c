//To relate two numbers
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d is smaller than %d.",a,b);
	}
	if(a>b)
	{
		printf("%d is greater than %d.",a,b);
	}
	if(a==b)
	{
		printf("%d is equal to %d.",a,b);
	}
}
