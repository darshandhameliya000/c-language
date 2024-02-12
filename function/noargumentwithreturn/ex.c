#include<stdio.h>
int sum();
int main()
{
	int c=0;
	c=sum();
	printf("sum is :- %d",c);
}
int sum()
{
	int a=10;
	int b=20;
	int c=a+b;
	return c;
}