#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define NUM 5

int main()
{
  pthread_t t1,t2;
  void *thread(void *);
  
  pthread_create(&t1,NULL,thread,(void *)"Hello");
  pthread_create(&t2,NULL,thread,(void *)"World\n");
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
}

void *thread(void *m)
{
  int i;

  for(i=0;i<NUM;i++){
    printf("%s",m);
    sleep(1);
    }
  return NULL;
}
