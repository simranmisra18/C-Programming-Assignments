//To print a series
#include<stdio.h>
void main()
{
	int a,b,i,n,c,j;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("0");
	}
	else if(n==2)
	{
		printf("0\n0 1");
	}
	else
	{
		printf("0\n0 1");
		for(i=3;i<=n;i++)
		{
			a=0;
			b=1;
			printf("\n0 1 ");
		for(j=0;j<(i-2);j++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
				
		}
	}
}
