#include<stdio.h>
void smllestvalue()
{
	int a,b;
	
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("b is smallest");
	}
}

void positiveornegative()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a>=0)
	{
		printf("positive number");
	}
	else
	{
		printf("negative number");
	}
}

void divi5ornot()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a%5==0)
	{
		printf("divided by 5");
	}
	else
	{
		printf("not divided by 5");
	}
}
		
void divi5and3ornot()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a%5==0 && a%3==0)
	{
		printf("divided by 5 or 3");
	}
	else
	{
		printf("not divided by 5 or 3");
	}
}

void studentmarksheet()
{
	int maths,eng,guj,total;
	float per=0;
	
	printf("enter the student marks:-\n");
	scanf("%d\n%d\n%d",&maths,&eng,&guj);
	
	total=maths+eng+guj;
	
	printf("total of the student marks %d",total);
	
	if(maths>=36 && eng>=36 && guj>=36)
	{
		printf("\nstudent is pass");
		per=total*100/300;
		printf("\npercentage of a student=%f",per);
	}
	else
	{
		printf("\nstudent is fail");
	}
}

void leapyear()
{
	int year;
	printf("enter the year:-");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("this year is leapyear");
	}
	else
	{
		printf("this year not leapyear");
	}
}

void largestno()
{
	int a,b,c;
	printf("enter the a value:-");
	scanf("%d",&a);
	printf("enter the b value:-");
	scanf("%d",&b);
	printf("enter the c value:-");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d",a);
		}
		else
		{
			if(c>b)
			{
				printf("%d",c);
			}
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d",b);
		}
		else
		{
			printf("%d",c);
		}
	}
}

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


