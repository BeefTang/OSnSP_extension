#include <stdio.h>
#include <stdlib.h>
#define Arr struct Arr_ 

struct Arr_{
 	char d;
	int a,b,c;
};

void fun(char arr[])
{
	printf("%p, arr+1:%p\n",&arr,&arr +1);

}


int main()
{
	char array[3];
	Arr x;
	array=3;
	printf("%d\n",sizeof(int *));
	printf("%p, %p, %p, %p\n",&array,array,array+1, &array+1);
	fun(array);

	array[3]='a';//compilable but error in urn time, 
	
	

}
