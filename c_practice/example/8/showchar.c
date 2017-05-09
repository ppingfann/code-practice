#include<stdio.h>

int main()
{
  char ch;
  int lines,width;
  void show(char ,int ,int );
  printf("plese enter the character and the number of lines and width:\n");
  while((ch=getchar())!='\n'){
    scanf("%d %d",&lines,&width);
    while(getchar()!='\n')
      ;
    show(ch,lines,width);
    printf("plese enter again:");
    printf("(enter the enter to quit directly)\n");
  } 
}

void show(char ch,int lines,int width)
{
  int raw,row;
  for(raw=0;raw<lines;raw++){
    for(row=0;row<width;row++)
    putchar(ch);
    printf("\n");
  }
}
