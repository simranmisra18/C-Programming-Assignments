//To calculate the area of given shape
#include<stdio.h>
void main()
{
	int i;
	float a,b,area;
	printf("Enter the following number for chosing the shape to find it's area: \nCircle:1 \nTriangle:2 \nReactangle:3 \nSquare:4 \nRhombus:5\n");
	scanf("%d",&i);
	if(i==1)
	{
	printf("Enter the radius of circle:");
	scanf("%f",&a);
	area=3.14*a*a;
	printf("Area of circle is %f",area);	
	}
	else if(i==2)
	{
	printf("Enter the height and base of triangle:");
	scanf("%f%f",&a,&b);
	area=a*b/2;
	printf("Area of triangle is %f",area);	
	}
	else if(i==3)
	{
	printf("Enter the sides a and b of rectangle:");
	scanf("%f%f",&a,&b);
	area=a*b;
	printf("Area of rectangle is %f",area);	
	}
	else if(i==4)
	{
		printf("Enter the side of square a:");
	scanf("%f",&a);
	area=a*a;
	printf("Area of square is %f",area);
	}
	else if(i==5)
	{
		printf("Enter the diagonals of rhombus a and b:");
	scanf("%f%f",&a,&b);
	area=a*b;
	printf("Area of rhombus is %f",area);
	}
	else
	{
		printf("There is an error in the input.");
	}
}
