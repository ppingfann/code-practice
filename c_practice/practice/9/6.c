#include<stdio.h>
#include<ctype.h>

int main()
{
  char ch;
  int check(char );
  while((ch=getchar())!=EOF){
    if(ch!='\n'){
    if(check(ch))
      printf("it's a alphabet \nand it's number is %d\n",toupper(ch)-64);
    else
      printf("it's not a alphabet.\n");
    }
    }
}

int check(char c)
{
  if((c>64 && c<91) || (c>96 && c<123))
    return 1;
  else
    return 0;
  
}




