#include<stdio.h>
#include<float.h>

int main()
{
	float a=1.0/3.0;
	double b=1.0/3.0;
	printf("%.4f %.12f %.16f\n%.4f %.12f %.16f\n",a,a,a,b,b,b);
	printf("%.4f %.12f %.16f\n%.4f %.12f %.16f\n",FLT_DIG,FLT_DIG,FLT_DIG,DBL_DIG,DBL_DIG,DBL_DIG);
return 0;
}
	
