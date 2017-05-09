#include<stdio.h>

int main()
{
  void output(char ,int ,int );
  char ch;
  int x,y;
  printf("please enter the character :\n");
  scanf("%c",&ch);
  printf("please enter the line :\n");
  scanf("%d",&x);
  printf("please enter the rank :\n");
  scanf("%d",&y);
  printf("the consequece is :\n");
  output(ch,x,y);
}

void output(char c,int m,int n)
{
  int i,j;
  for(j=0;j<m;j++){
    for(i=0;i<n;i++)
      printf("%c",c);
      printf("\n");
  }
}
