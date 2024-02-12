#include<stdio.h>
int reverse()
{
	int n,b;
	printf("enetr the value is :-");
	scanf("%d",&n);
	
	while(n>0)
	{
		b=n%10;
		printf("%d",b);
		n=n/10;
	}
}

int perfect()
{
	int num,rem,sum=0;
	printf("enetr the number :-");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("this number is perfect");
	}
	else
	{
		printf("this number is not perfect");
	}
}

int main()
{
	perfect();
	return 0;
}
