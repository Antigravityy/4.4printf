/*width.c--�ֶο��*/
#include<stdio.h>
#define PAGES 123123123
int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d\n",PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}