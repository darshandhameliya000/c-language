#include<stdio.h>
int main()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);
	
	
	if(a%5==0 && a%3==0)
	{
		printf("a is divided by 5 or 3");
	}
	else
		
	{
		printf("a is not divided by 5 or 3");
	}
		
};