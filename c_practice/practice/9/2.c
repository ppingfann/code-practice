#include<stdio.h>

int main()
{
  void chline(char ch,int i,int j);
  int m,n;
  char c;
  printf("please enter the character :\n");
  scanf("%c",&c);
  printf("please enter the numbers (m,n, from line m to line n):\n");
  scanf("%d %d",&m,&n);
  printf("the outcome is:\n");
  chline(c,m,n);
  putchar('\n');
}

void chline(char ch,int i,int j)
{
  int k,l;
  for(k=1;k<i;k++){
    printf(" ");
  }
  for(l=i;l<=j;l++){
    printf("%c",ch);
  }
}
  
  
  
