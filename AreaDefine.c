//To find the area of the circle by using define
#include<stdio.h>
void main()
{
	float r, area;
	#define pi 3.14
	printf("Enter the radius r of the circle:");
	scanf("%f",r);
	area=pi*r*r;
	printf("Area of the circle is %f.",area);
}
