//To find the factorial of a number
#include<stdio.h>
void main()
{
	int n,i,result=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("Factorial of the number is %d.",result);
}
