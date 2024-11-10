//To print the array using loop
#include<stdio.h>
void main()
{
	int i;
	int marks[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter the marks[%d]:",i);
		scanf("%d",&marks[i]);
		printf("\nArray element=%d",marks[i]);
		printf("\nArray index=%d",i);
		printf("\nArray address=%d",&marks[i]);
		
	}
}
