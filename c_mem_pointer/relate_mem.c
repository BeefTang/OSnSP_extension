#include <stdio.h>

int main()
{
	/*
	 *Only For DEMONSTRATION, DO NOT DO THIS IN REAL LIFE
	 */
	int a=-1;
	int b[3]={0,1,2};
	int c=3;

	b[-1]=9;
	b[4]=11;

	//Abort
	//b[4]=6;
	printf("b[-1]=%d,b[4]=%d\n",b[-1],b[4]);
	printf("a=%d,c=%d\n",a,c);
	printf("&a=%p,b=%p,&c=%p\n",&a,b,&c);

}
