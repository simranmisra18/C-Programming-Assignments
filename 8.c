//Linear search of user defined element in n numbers
#include<stdio.h>
void main()
{
	int n,i,b,l=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			printf("The number %d is found.",b);
			l=1;
			break;
		}
	}
	if(l==0)
	{
		printf("The number %d is not found.",b);
	}
}
