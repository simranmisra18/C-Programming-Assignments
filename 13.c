//To perform the functions without using built-in functions
#include<stdio.h>
#include<string.h>
void main()
{
	int i,l=0,n=0,p=0,m=0,l2=0;
	char a[20],b[20],c[20];
	printf("Enter the string:");
	gets(a);
	//Reverse
	printf("Rverse: ");
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=l-1;i>=0;i--)
	{
		b[n]=a[i];
		n++;
	}
	b[n]='\0';
	printf("%s",b);
	//Palindrome
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
		p++;	
		}
	}
	if(p==l)
	{
		printf("\nThe string is a palindrome.");
	}
	else
	{
		printf("\nThe string is not a palindrome.");
	}
	//Compare
	printf("\nEnter the second string:");
	gets(c);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c[i])
		{
			m++;
		}
	}
	if(m==l)
	{
		printf("The strings are equal.");
		
	}
	else
	{
		printf("The strings are not equal.");
	}
	//To find longer string
	for(i=0;c[i]!='\0';i++)
	{
		l2++;
	}
	if(l>l2)
	{
		printf("\n%s is longer than %s.",a,c);
	}
	else if(l<l2)
	{
		printf("\n%s is longer than %s.",c,a);
	}
	else
	{
		printf("\n%s and %s are of equal length.",a,c);
	}
	
}
