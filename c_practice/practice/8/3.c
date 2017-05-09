#include<stdio.h>

int main()
{
  char ch;
  int i,j;
  while((ch=getchar())!=EOF){
    if(ch>='a' && ch<='z')
      i++;
    if(ch>='A' && ch<='Z')
      j++;
    } 
      printf("%d,%d\n",i,j);
    
}
