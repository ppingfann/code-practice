#include<stdio.h>
#include<stdlib.h>

#define ROWLEN 512
#define LINELEN 35

void see(char filename[]);
void see_more();
int rt;

int main(int ac,char *av[])
{
	if(ac==1)
	  {
	  printf("usage : %s filename\n",av[0]);
	  exit(1);
	  }
	else
	while(--ac)
	  {
	  printf("#########################\n%s\n####################\n",*++av);
	  see(*av);
	  }
}

void see(char filename[])
{
	FILE *file_ptr;
	char buff[ROWLEN];
	int num=0;
	if((file_ptr=fopen(filename,"r"))==NULL)
	  perror(filename);
	else	
	  while((fgets(buff,ROWLEN,file_ptr))!=NULL)
	{
	if(num++==LINELEN)
	  {
	  see_more();
	  num-=rt;
	  }
	  printf("%s",buff);
	 }
	  fclose(file_ptr);
}
	 
void see_more()
{
	char ch;
	printf("\033[7mmore...\033[m");
	if((ch=getchar())!=-1)
	if (ch=='q')
	exit(1);
	if (ch==' ')
	rt=LINELEN;
	if (ch=='\n')
	rt=1;
}
