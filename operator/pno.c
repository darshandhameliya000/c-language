#include<stdio.h>
int main()
{
	int a;
	
	printf("enter a value:-");
	scanf("%d",&a);
	
	
	if(a==0)
	{
		printf("this value is zero");
	}
	else
	{
		if(a>0)
		{
			printf("a is positive");
		}
		else
		{
			printf("a is nagetive");
		}
	}
};