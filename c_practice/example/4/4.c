#include<stdio.h>
int main()
{
	float area,circum,radius;
	const float  PI = 3.1415926;
	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circum=2.0*PI*radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference =%1.2f,area=%1.2f\n",circum,area);
	return 0;
}

