#include<stdio.h>

int main()
{
  int ch;
  int num=0;
  printf("image a number and i can guess it\n");
  printf("is it 0 ???\n");
  while((ch=getchar())!='y')
  {
    if(ch=='n')
       printf("OK,is it %d ???\n",++num);
    else
      printf("OH,i cannot recognize what you write!!!\n");
    while(getchar()!='\n')
      continue;
  }
  printf("haha,i know i can always do it!!!\n");
}
     
