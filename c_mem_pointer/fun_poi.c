#include <stdio.h> 
int* which_bigger(int* a,int* b) 
{ 
	return (*a>*b)?a:b;
} 
  
int* which_smaller(int* a,int* b)
{
        return (*a<*b)?a:b;
}


int * get_desired_wrapper(int* (*fun)(),int *a, int *b)
{
	return fun(a,b);
}

int main() 
{
    int* (*fun_ptr)(int*,int*) = which_bigger;//&  
    int a=3,b=2;
    printf("%d\n",*(*fun_ptr)(&a,&b));//* before fun_ptr
     
    /*example of array of fun pointer
    int* (*fun_ptrs[2])(int*,int*)={which_bigger,which_smaller};
    int ch;
    printf("which do you want: 0 for bigger, 1 for smaller\n"); 
    scanf("%d", &ch);     
    printf("%d\n",*(*fun_ptrs[ch])(&a,&b));
	*/			      

    // wrapper
    // useful for general sorting
    //printf("%d\n",*get_desired_wrapper(which_smaller,&a,&b));
    return 0; 
} 
