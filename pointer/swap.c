#include <stdio.h>

int main()
{
    int a,b,c;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
	
    printf("enter the 1 number swap:- ");
    scanf("%d",&a);
    printf("enter the 2 number swap:- ");
    scanf("%d",&b);
	
	 printf("\n\nprint address : %p\n",&a);
	 printf("print address : %p\n",&b);
	 printf("print address : %p\n",&c);
	 
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
	
    printf("\n\nprint value : %d\n",*ptr1);
    printf("print value  : %d\n",*ptr2);


    return 0;
}
