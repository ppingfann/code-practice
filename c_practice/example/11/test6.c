#include<stdio.h>
#include<string.h>

#define LINE 20
#define MAX 80

int main()
{
  char input[LINE][MAX];
  char *string[LINE];
  void sort(char *string[],int num);
  int ct = 0;
  int k;

  printf("plese enter the string: \n");
  puts("put enter at the begin of the line to quit");
  while(ct < LINE && fgets(input[ct],MAX,stdin) && input[ct][0]!='\n'){
    input[ct][strlen(input[ct])-1] = '\0';
    string[ct] = input[ct];
    ct++;
    }
  sort(string,ct);
  puts("the consequece is: ");
  for(k=0;k<ct;k++)
    puts(input[k]);
}

void sort(char *string[],int num)
{
  char *temp;
  int a,b;
  for(a=0;a<num-1;a++)
    for(b=a+1;b<num;b++)
      if(strcmp(string[a],string[b])>0){
        temp = string[a];
        string[a] = string[b];
        string[b] = temp;
      }
}
