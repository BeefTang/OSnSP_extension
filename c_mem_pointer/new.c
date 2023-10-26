#include <stdio.h>

void fun(char *c)//char c[] and char *c are the identical from compiler's point of view
{
	printf("%p,%p\n",c+1,&c+1);
}

int main()
{
	char ee[4];
	printf("original %p\n",ee);
	fun(ee);
}
