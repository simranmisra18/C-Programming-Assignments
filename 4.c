//To find odd or even using switch
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0: printf("%d is even.",n);
		break;
		default: printf("%d is odd.",n);
	}
}
