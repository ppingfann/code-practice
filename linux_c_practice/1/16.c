#include<stdio.h>
int main()
{
struct STUDENT
{
	int num;
	char name[20];
	int score;
};
struct STUDENT student1={201,"pingfan",100};
struct STUDENT student2={202,"zhutou",0};
printf("NO.%d,name:%s,score is:%d\n",student1.num,student1.name,student1.score);
return 0;
}
