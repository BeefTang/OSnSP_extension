#include <stdio.h>
#include <stdlib.h>
#define Arr struct Arr_ 

struct Arr_{
 	char d;
	int a,b,c;
};


int main()
{
	char array[3];
	Arr x;
	printf("%p, %p\n",&(x.d),&(x.a));
	
	array=3;

}
