#include<stdio.h>
int smallestvalue()
{
	int a,b;
	printf("enter the first value:-");
	scanf("%d",&a);
	printf("enter the second value:-");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("b is smallest");
	}
}

int positiveornegative()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);

	if(a>=0)
	{
		printf("this is positive number");
	}
	else
	{
		printf("this is nagetive number");
	}
}
	
int divide5ornot()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);

	if(a%5==0)
	{
		printf("it is divided by 5");
	}
	else
	{
		printf("it is not divided by 5");
	}
}
	
int divide5and3ornot()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);

	if(a%5==0 && a%3==0)
	{
		printf("it is divided by 5 and 3");
	}
	else
	{
		printf("it is not divided by 5 and 3");
	}
}
int studenrmarksheet()
{
	int maths,english,gujrati,total;
     float per;
	 
     printf("Enter Marks of 3 Subjects:\n");
     scanf("%d%d%d",&maths,&english,&gujrati);
	 
     total=maths+english+gujrati;
	 
     printf("\nTotal Marks of Student = %d\n",total);
    
     if(maths>=40 && english>=40 && gujrati>=40)
     {
        printf("\nStudent is PASS\n");
        per= total*100/300;
        printf("\nPercentage of a Student = %f",per);
     }
     else
        printf("\nStudent is FAIL");
     return 0;
}

int leapyearornot()
{
	int year;
	
	printf("enter the year:-");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf("this is leap year");
	}
	else
	{
		printf("this is not leap year");
	}
}

int abclargestnumber()
{
		int a,b,c;
	
	printf("enter a value :-");
	scanf("%d",&a);
	
	printf("enter b value :-");
	scanf("%d",&b);
	
	printf("enter c value :-");
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


int main()
{
	abclargestnumber();
}