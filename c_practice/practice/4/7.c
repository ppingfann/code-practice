#include<stdio.h>

int main()
{
	float yingli,jialun,gongli,sheng;
	scanf("%f %f",&yingli,&jialun);
	printf("yingli per jialun is :%.1f\n",yingli/jialun);
	gongli=1.609*yingli/100;
	sheng=3.785*jialun;
	printf("mei 100gongli de sheng shu :%.1f\n",gongli/sheng);
return 0;
}
	
