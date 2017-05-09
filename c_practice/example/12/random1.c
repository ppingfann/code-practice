#include<stdio.h>
#include<time.h>

extern int rand1();
extern void srand1();

int main()
{
  unsigned random1,random2;
  srand1((unsigned int )time(0));
  printf("random1:%hd\n",random1=(rand1()%6+1));
  printf("random2:%hd\n",random2=(rand1()%6+1));
  printf("sum is:%hd\n",random1+random2);
  return 0;
}

