#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the first value:-");
	scanf("%d",&a);
	
	printf("enter the second value:-");
	scanf("%d",&b);
	
	printf("enter the third value:-");
	scanf("%d",&c);
	
	if(a>b && b>c && c>a)
	{
		printf("a is largest then b");
	}
	else
	{
		printf("b is largest then c");
		
	}
};