//To print transpose of matrix
#include<stdio.h>
void main()
{
	int m,n,i,j;
	printf("Enter the size of the matrix:");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("\nEnter the elements of the matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe transpose of the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
