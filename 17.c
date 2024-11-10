//Insertion sort
#include<stdio.h>
void main()
{
	int i,j,n,t;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Ascending order is:");
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
