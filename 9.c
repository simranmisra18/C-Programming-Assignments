//Binary search
#include<stdio.h>
void main()
{
	int n,i,first,last,middle,b,f=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d",&b);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
    	if(b<middle)
    	{
    		last=middle-1;
    	}
    	if(b>middle)
    	{
    		first=middle+1;
    	}
    	if(b==middle)
    	{
    		printf("The number is found.");
    		f=1;
    		break;
    	}
    	middle=(first+last)/2;
    }
    if(f==0)
    {
    	printf("The number is not found.");
    }
}
