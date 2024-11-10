//To find factorial using recursion
#include<stdio.h>
int factorial(int);
void main()
{
	int n,result;
	printf("Enter the number:");
	scanf("%d",&n);
	result=factorial(n);
	printf("Factorial is %d.",result);
}
int factorial(int n)
{
	int r;
	if(n==0)
	{
		return(1);
	}
	else
	{
		r=n*factorial(n-1);
		return(r);
	}
}
