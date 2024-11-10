//To reverse a given integer
#include<stdio.h>
void main()
{
	int n,i,revnumber=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
	i=n%10;
	revnumber=(revnumber*10)+i;
	n=n/10;
    }
    printf("Reversed number is %d.",revnumber);
}
