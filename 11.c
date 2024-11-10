//Addition,Subtraction and transpose of matrix
#include<stdio.h>
void main()
{
	int m,n,i,j;
	printf("Enter the number of rows and column of the matrix:");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],add[m][n],sub[m][n];
	printf("Enter the array elements of first array:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the array elements of second array:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//Addition
	printf("Addition of the matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	//Subtraction
	printf("Addition of the matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
	//Transpose
	printf("Transpose of first matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
