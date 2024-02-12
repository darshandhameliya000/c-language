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
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest",a);
		}
		else 
		{
			if(c>b)
			{
				printf("c is largest",c);
			}
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is largest",b);
		}
		else
		{
			printf("c is largest",c);
		}	
	}		
}