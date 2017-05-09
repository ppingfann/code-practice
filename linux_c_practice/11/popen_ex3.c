#include<stdio.h>

int main()
{
  FILE *fp;
  
  fp = popen("mail admin backup","w");
  fprintf(fp,"Error with back!!\n");
  pclose(fp);
}
