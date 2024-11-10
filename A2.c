#include<stdio.h>
main()
{
	int x=1,y;
while(x==1)
{
	int i;
printf("Enter the question number:");
scanf("%d",&i);
switch(i)
{
	case 1: printf("Swapping of two values by pass by value:\n");
	int a,b;
printf("Enter a and b:");
scanf("%d%d",&a,&b);
swap(a,b);
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
case 2: printf("Swapping of two numbers using pass by reference:\n");
int a1,b1;
printf("Enter a1 and b1:");
scanf("%d%d",&a1,&b1);
swap1(&a1,&b1);
printf("a1=%d, b1=%d",a1,b1);
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
default: printf("Invalid question number.");
}
}
}
swap(int a, int b)
{
int t;
t=a;
a=b;
b=t;
printf("a=%d, b=%d",a,b);
}
swap1(int *a, int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
