#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<ctype.h>

struct arg_set{
    char *fname;
    int count;
};

int main(int ac,char *av[])
{
  struct arg_set args1,args2;
  void *count_words(void *);
  pthread_t t1,t2;
  
  if(ac != 3){
    printf("usage: %s file1 file2\n",av[0]);
    exit(1);
  }
  args1.fname = av[1];
  args1.count = 0;

  args2.fname = av[2];
  args2.count = 0;

  pthread_create(&t1,NULL,count_words,(void *)&args1);
  pthread_create(&t2,NULL,count_words,(void *)&args2);
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);

  printf("%s :total words: %5d\n",args1.fname,args1.count);
  printf("%s :total words: %5d\n",args2.fname,args2.count);
  printf("total words: %5d\n",args1.count+args2.count);
}
  
void *count_words(void *a)
{
  struct arg_set *args = a;
  FILE *fp;
  char c,prevc = '\0';
  
  if((fp = fopen(args->fname,"r")) != NULL){
    while((c = getc(fp)) != EOF){
      if(!isalnum(c) && isalnum(prevc))
        args->count++;
      prevc = c;
      }
    fclose(fp);
    }
  else
    perror(args->fname);
    return NULL;
}


