#include<stdio.h>
int sum(int a,int b)
{
	int total=a+b;
	return total;
}
int main()
{
	int a=10;
	int b=20;
	int total=sum(a,b);
	printf("total %d \n",total);
	return 0;
}