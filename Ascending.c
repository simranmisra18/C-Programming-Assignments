//To arrange the array in ascending order
#include<stdio.h>
int min(int,int);
main()
{
	int n,i,j,b,result;
	printf("Enter the number of terms in the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nAscending order of array is:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			result=min(a[i],a[j]);
			if(result==a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
		printf(" %d",a[i]);
	}
	
	
}
int min(int x, int y)
{
	int ret;
	if(x<y)
	{
		ret=x;
	}
	else
	{
		ret=y;
	}
	return ret;
}
