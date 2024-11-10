//Sorting
#include<stdio.h>
main()
{
int x=1,y;
while(x==1)
{
int n,i,num,f;
printf("Enter the question number:");
scanf("%d",&f); 
switch(f)
{
case 1: printf("Selection sort:\n");
int n1,i1;
printf("Enter the number of elements in the array:");
scanf("%d",&n1);
int a1[100];
printf("\nEnter the elements of the array:");
for(i1=0;i1<n1;i1++)
{
scanf("%d",&a1[i1]);
}
selection(a1,n1);
printf("\nDo you want to continue another question? \nFor yes: Press 1 \nFor no: Press0\n");
scanf("%d",&y);
if(y==1)
{
continue;
}
else
{
x=0;
}

break;
case 2: printf("Insertion sort:\n");
int n2,i2;
printf("Enter the number of elements in the array:");
scanf("%d",&n2);
int a2[100];
printf("\nEnter the elements of the array:");
for(i2=0;i2<n2;i2++)
{
scanf("%d",&a2[i2]);
}
insertion(a2,n2);
printf("\nDo you want to continue another question? \nFor yes: Press 1 \nFor no: Press0\n");
scanf("%d",&y);
if(y==1)
{
continue;
}
else
{
x=0;
}

break;
case 3: printf("Bubble sort:\n");
int n3,i;
printf("Enter the number of elements in the array:");
scanf("%d",&n3);
int a3[100];
printf("\nEnter the elements of the array:");
for(i=0;i<n3;i++)
{
scanf("%d",&a3[i]);
}
bubble(a3,n3);
printf("\nDo you want to continue another question? \nFor yes: Press 1 \nFor no: Press0\n");
scanf("%d",&y);
if(y==1)
{
continue;
}
else
{
x=0;
}

break;
default: printf("Enter the correct option.");
}
}
}
bubble(int a[],int n)
{
int i,j,t,k;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
for(k=0;k<n;k++)
{
printf("%d ",a[k]);
}
printf("\n");
}
}
insertion(int a[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
for(j=i+1;j>0;j--)
{
if(a[j-1]>a[j])
{
t=a[j-1];
a[j-1]=a[j];
a[j]=t;
}
}
for(j=0;j<n;j++)
{
printf("%d ",a[j]);
}
printf("\n");
}
}
selection(int a[],int n)
{
int i,j,t,min;

for(i=0;i<n-1;i++)
{
min=i;
for(j=i;j<n-1;j++)
{
if(a[min]>a[j+1])
{
min=j+1;

}

}
if(min!=i)
{
t=a[min];
a[min]=a[i];
a[i]=t;
}


for(j=0;j<n;j++)
{
printf("%d ",a[j]);
}
printf("\n");
}
}

/*
//Sorting of strings in alphabetical order
//Sorting
#include<stdio.h>
#include<string.h>
main()
{
	int x=1,y,w,i;
	while(x==1)
	{
		printf("Enter the type of sort to be performed:");
		scanf("%d",&w);
		switch(w)
		{
			case 1: printf("Bubble sort:\n");
			int n1;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n1);
			char a1[20][20];
			printf("Enter the elements of the array:");
			for(i=0;i<n1;i++)
			{
				scanf("%s",&a1[i]);
			}
			bubble(a1,n1);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			case 2: printf("Insertion sort:\n");
			int n2;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n2);
			char a2[20][20];
			printf("Enter the elements of the array:");
			for(i=0;i<n2;i++)
			{
				scanf("%s",&a2[i]);
			}
			insertion(a2,n2);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			case 3: printf("Selection sort:\n");
			int n3;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n3);
			char a3[20];
			printf("Enter the elements of the array:");
			for(i=0;i<n3;i++)
			{
				scanf("%s",&a3[i]);
			}
			selection(a3,n3);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			default: printf("Enter the correct option.");
		}
	}
}
bubble(char a[][20],int n)
{
	int i,j,k;
	char t[20][20];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			for(k=0;k<strlen(a[j]);k++)
			{
				if(a[j][k]>a[j+1][k])
			{
				strcpy(t[j],a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t[j]);
				break;
			}
			else
			{
				continue;
			}
			}
			
		}
		for(j=0;j<n;j++)
		{
			printf("%s ",a[j]);
		}
		printf("\n");
	}
}
insertion(char a[][20],int n)
{
	int i,j,k;
	char t[20][20];
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			for(k=0;k<strlen(a[j]);k++)
			{
				if(a[j-1][k]>a[j][k])
			{
				strcpy(t[j-1],a[j-1]);
				strcpy(a[j-1],a[j]);
				strcpy(a[j],t[j-1]);
				break;
			}
			else
			{
				continue;
			}
			}
			
		}
		for(j=0;j<n;j++)
		{
			printf("%s ",a[j]);
		}
		printf("\n");
	}
}
selection(char a[][20],int n)
{
	int i,j,min,k;
	char t[20][20];
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i;j<n-1;j++)
		{
			for(k=0;k<strlen(a[j]);k++)
			{
				if(a[min][k]>a[j+1][k])
			{
				min=j+1;
				break;
			}
			else
			{
				continue;
			}
			}
			
		}
		if(min!=i)
		{
			strcpy(t[min],a[min]);
			strcpy(a[min],a[i]);
			strcpy(a[i],t[min]);
		}
		for(j=0;j<n;j++)
		{
			printf("%s ",a[j]);
		}
		printf("\n");
	}
}

*/


/*
//Sorting using recursion
#include<stdio.h>
main()
{
	int x=1,y,w,i;
	while(x==1)
	{
		printf("Enter the type of sort to be performed:");
		scanf("%d",&w);
		switch(w)
		{
			case 1: printf("Bubble sort:\n");
			int n1;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n1);
			int a1[20];
			printf("Enter the elements of the array:");
			for(i=0;i<n1;i++)
			{
				scanf("%d",&a1[i]);
			}
			bubble(a1,n1,n1);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			case 2: printf("Insertion sort:\n");
			int n2;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n2);
			int a2[20];
			printf("Enter the elements of the array:");
			for(i=0;i<n2;i++)
			{
				scanf("%d",&a2[i]);
			}
			insertion(a2,n2,n2,0);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			case 3: printf("Selection sort:\n");
			int n3;
			printf("Enter the number of elements in the array:");
			scanf("%d",&n3);
			int a3[20];
			printf("Enter the elements of the array:");
			for(i=0;i<n3;i++)
			{
				scanf("%d",&a3[i]);
			}
			selection(a3,n3,n3,0);
			printf("\nDo you want to continue?\n Yes:1  No:0\n");
			scanf("%d",&y);
			if(y==0)
			{
				x=1;
			}
			else
			{
				continue;
			}
			break;
			default: printf("Enter the correct option.");
		}
	}
}
bubble(int a[],int n,int n1)
{
	int i,j,t;
	if(n==1)
	{
		return;
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
		bubble(a,n-1,n1);
	
}
insertion(int a[],int n,int n1,int i)
{
	int j,t;
	if(n==0)
	{
		return;
	}
	for(j=i;j>0;j--)
	{
		if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
	}
	
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	insertion(a,n-1,n1,i+1);
}
selection(int a[],int n,int n1,int i)
{
	int j,t,min;
	if(n==2)
	{
		return;
	}
	min=i;
		for(j=i;j<n1-1;j++)
		{
			if(a[min]>a[j+1])
			{
				min=j+1;
			}
		}
		if(min!=i)
		{
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
		selection(a,n-1,n1,i+1);
}

*/
