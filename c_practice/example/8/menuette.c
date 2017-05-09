#include<stdio.h>

int main()
{
  char getch(void);
  void count(void);
  char ch;
  printf("Enter the letter of your choice:\n");
  printf("a.advice          b.bell\n");
  printf("c.count           q.quit\n");
  while((ch=getch())!='q'){
    switch (ch){
      case 'a': printf("Buy low,sell high.\n");
                break;
      case 'b': printf("\a");
                break;
      case 'c': count();
                break;
      default : printf("Please respond with a,b,c,or q.\n");
                break;
      }
  printf("Enter the letter of your choice:\n");
  printf("a.advice          b.bell\n");
  printf("c.count           q.quit\n");
    }
}
  
void count(void)
{
  int num;
  int i;
  printf("Count how far?Enter an integer:\n");
  if(scanf("%d",&num)==1)
    for(i=1;i<=num;i++)
      printf("%d\n",i);
  else{
    printf("%s is not an integer.\n",num);
    printf("Please enter an integer value,such as 25,-178,or 3 :5\n");
    }
  while(getchar()!='\n')
    continue;
}

char getch()
{  
  char ch;
  ch=getchar();
    while(getchar()!='\n')
      continue;
  return ch;
} 
  
