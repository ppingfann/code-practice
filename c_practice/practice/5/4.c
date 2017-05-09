#include<stdio.h>

int main()
{
	float height;
	int feet;
	double inches;
		
	printf("please enter the height(cm) of you (must > 0):\n");
	scanf("%f",&height);
	while(height>0)
	{
	  feet=height/30.48;
	  inches=(height/30.48-feet)*12;
	  printf("%.1f cm = %d feet %.1f inches\n",height,feet,inches);
	  printf("please enter the height(cm) of you (must > 0):\n");
	  scanf("%f",&height);
	}
return 0;
}
	  
