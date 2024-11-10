//Perform the functions using functions and without using built in functions
#include<stdio.h>
#include<string.h>
int length(char a[]);
void compare(char a[],char b[]);
void longer(char a[],char b[]);
void concatenate(char a[],char b[]);
void substr(char a[]);
 main()
{
	int i;
	char a[20],b[20];
	printf("Enter the first string:");
	gets(a);
	printf("Enter the second string:");
	gets(b);
	compare(a,b);
	longer(a,b);
	concatenate(a,b);
	substr(a);
	
}
void compare(char a[],char b[])
{
	int l1,l2,i,l=0;
	l1=length(a);
	l2=length(b);
	if(l1==l2)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==b[i])
			{
				l++;
			}
		}
		if(l==l1)
		{
			printf("The strings are equal.");
		}
		else
		{
			printf("The strings are not equal.");
		}
	}
	else
	{
		printf("The strings are not equal.");
	}
	
}
int length(char a[])
{
	int i,l=0;
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	return(l);

}
void longer(char a[],char b[])
{
	int l1,l2;
	l1=length(a);
	l2=length(b);
	if(l1>l2)
	{
		printf("%\ns is longer than %s.",a,b);
	}
	else if(l1<l2)
	{
		printf("\n%s is longer than %s.",b,a);
	}
	else
	{
		printf("\n%s length is equal to that of %s.",a,b);
	}
}
void concatenate(char a[],char b[])
{
	int l1,i,j=0;
	l1=length(a);
	for(i=l1;b[j]!='\0';i++)
	{
		a[i]=b[j];
		j++;
	}
	a[i]='\0';
	printf("\n%s",a);

}
void substr(char a[])
{
	int i,l=0;
	for(i=0;a[i]!='\0';i++)
	{
		l++;
		if(a[i]==' ')
		{
			printf("\nThere is a substring at position %d.",l+1);
		}
	}
}
