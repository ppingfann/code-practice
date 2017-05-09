#include<stdio.h>

float calculate(float ,float);

int main()
{
	float a,b;
	for(;scanf("%f",&a),scanf("%f",&b);)
	calculate(a,b);
	return 0;
}

float calculate(float x,float y)
{
	printf("%f\n",(x-y)/(x*y));
} 
