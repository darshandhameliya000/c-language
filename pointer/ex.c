#include<stdio.h>
int main()
{
	int a=10;
	int* b=&a;
	printf("value is %d\n",a);
	printf("address is %p\n",&a);
	printf("pointer value is %p\n",b);
	printf("pointer address is %p\n",&b);
	return 0;
}
