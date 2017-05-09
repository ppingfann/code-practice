#include<stdio.h>
#include<fcntl.h>

int main()
{
  char line[100];
  fgets(line,10,stdin);printf("%s",line);
  fgets(line,10,stdin);printf("%s",line);
  fgets(line,10,stdin);printf("%s",line);
  
  return 0;
}

