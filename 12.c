//To do the operations without using built in
#include<stdio.h>
#include<string.h>
void main()
{
	int i,l=0,n=0,v=0;
	char a[20];
	printf("Enter the srtring:");
	gets(a);
	//Length of the string
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	printf("Length of the string is %d.",l);
	//Total number of characters
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			n++;
		}
	}
	printf("\nTotal number of characters is %d.",n);
	//Total number of vowels
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			v++;
		}
	}
	printf("\nNumber of vowels is %d.",v);
	//Copy string
	printf("\nThe string entered is '%s'.",a);
}
