#include<stdio.h>
void posnegandzero()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("this is zero");
	}
	else if(a>=0)
	{
		printf("positive number");
	}
	else
	{
		printf("negative number");
	}
}

int main()
{
	posnegandzero();
	return 0;
}
