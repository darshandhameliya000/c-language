#include<stdio.h>
int posnegorzero()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);

	if(a==0)
	{
		printf("this value is zero");
	}
	else
	{
		if(a>0)
		{
			printf("this is positive");
		}
		else
		{
			printf("this is nagetive");
		}		
	}
}

int main()
{
	posnegorzero();
}
	