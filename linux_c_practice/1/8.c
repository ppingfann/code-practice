#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int ch;
FILE *fp;
long long count=0;
if(argc!=2)
{
printf("warning : usage method:%s+filename\n",argv[0]);
exit(1);
}
if((fp=fopen(argv[1],"r"))==NULL)
{
printf("can't open the file %s\n",argv[1]);
exit(1);
}
while((ch=getc(fp))!=EOF)
{
putc(ch,stdout);
count++;
}
fclose(fp);
printf("the file %s's charater's count is %1d\n",argv[1],count);
return 0;
}
