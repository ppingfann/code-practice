#include<stdio.h>
#include<string.h>
#define SIZE 100

int main()
{
	char word[SIZE];
	int num,i;
	printf("please enter a word:\n");
	scanf("%s",word);
	num=strlen(word);
	printf("the convert of this word is:\n");
	for(i=0;i<num;i++)
	printf("%c",word[num-1-i]);
	printf("\n");
	return 0;
}
