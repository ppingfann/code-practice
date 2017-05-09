#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
int main()
{
  char string1[MAX];
  char string2[MAX];
  char *string_in(char *string1,char *string2);
  while(1){
  printf("please enter the string1:(enter the 'q' at the beginning to quit)\n");
  if(fgets(string1,MAX,stdin)){
    if(string1[0]=='q')
      exit(1);
    string1[strlen(string1)-1] = '\0';
    }
  printf("please enter the string2:(enter the 'q' at the beginning to quit)\n");
  if(fgets(string2,MAX,stdin)){
    if(string2[0]=='q')
      exit(1);
    string2[strlen(string2)-1] = '\0'; 
    }
  printf("%u\n",string_in(string1,string2));
  }
}

char *string_in(char *string1,char *string2)
{
  return strstr(string1,string2);
}
  
  
    
    
