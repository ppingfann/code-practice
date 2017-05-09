#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char number[30];
  char *end;
  long value;
  
  puts("Enter a number(empty line to quit):");
  while(fgets(number,30,stdin)){
    number[strlen(number)-1] = '\0';
    if(number[0]!='\0'){
    value = strtol(number,&end,10) ;
    printf("Value : %ld , stopped at %s (%d)\n",value,end,*end);
    puts("Next value");
  }
    else 
      break;
  }
  puts("BYE");
}

  
