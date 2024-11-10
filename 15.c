//To sort an array in ascending order
#include<stdio.h>
void asc(int a[], int n);
void main()
{
	int n,i;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Ascending order of the array is:");
	asc(a,n);
}
void asc(int a[], int n)
{
	int i,b;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}

