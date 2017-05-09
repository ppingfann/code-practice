#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
#define LEN 100
int main()
{
  char ch;
  void remind(void);
  void out_prim(char (*string)[LEN]);
  void out_ASC(char (*string)[LEN]);
  void out_len(char (*string)[LEN]);
  char string[MAX][LEN];

  int i;
  for(i=0;i<MAX;i++){
    printf("please enter the string[%d]:\n",i);
    fgets(string[i],LEN,stdin);
    string[i][strlen(string[i])-1] = '\0';
    }
  while(1){
  remind();
  ch=getchar();
  while(getchar()!='\n')
    continue;
  switch (ch){
  case 'a': out_prim(string);
            continue;
  case 'b': out_ASC(string);
            break;
  case 'c': out_len(string);
            break;
  case 'e': exit(1);
  default : puts("\nwrong,enter a / b / c / d / e.");
  }
  }
}

void remind(void )
{
  puts("\na. output primer string list.");
  puts("b. output string by ASCII.");
  puts("c. output string by length arise.");
  puts("d. output string by length of the first alphabet.");
  puts("e. quit.");
  putchar('\n');
}

void out_prim(char (*string)[LEN])
{
  int i;
  printf("\nout primer string list.\n");
  for(i=0;i<MAX;i++)
    puts(string[i]);
}

void out_ASC(char (*string)[LEN])
{
  char *temp;
  char *sp[MAX];
  int x;
  for(x=0;x<MAX;x++){
    sp[x]=malloc(LEN);
    sp[x] = string[x];
    }
  int i,j,k;
  for(i=0;i<MAX;i++)
    for(j=i+1;j<MAX;j++)
      if(strcmp(sp[i],sp[j])>0){
        temp=sp[i];
        sp[i]=sp[j];
        sp[j]=temp;
       }
  puts("\noutput string by ASCII.");
  for(k=0;k<MAX;k++)
    puts(sp[k]);
}

void out_len(char (*string)[LEN])
{
  char *temp;
  char *sp[MAX];
  int x;
  for(x=0;x<MAX;x++){
    sp[x] = malloc(LEN);
    sp[x] = string[x];
    }
  int i,j;
  for(i=0;i<MAX;i++)
    for(j=i+1;j<MAX;j++)
      if(strlen(sp[i]) > strlen(sp[j])){
        temp = sp[i];
        sp[i] = sp[j];
        sp[j] = temp;
      }
  int k;
  putchar('\n');
  printf("output string by length.\n");
    for(k=0;k<MAX;k++)
      puts(sp[k]);
}
        

