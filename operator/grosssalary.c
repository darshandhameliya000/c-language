#include<stdio.h>
int main()
{
	int a;
	float hra,da,gross_salary;
	printf("enter a gross salary :- ");
	scanf("%d",&a);
	
	if(a<=5000)
	{
		hra=(a*8)/100;
		da=(a*20)/100;
	}
	else if(a<=10000)
	{
		hra=(a*12)/100;
		da=(a*30)/100;
	}
	else if(a<=15000)
	{
		hra=(a*15)/100;
		da=(a*40)/100;
	}
	else if(a>=15000)
	{
		hra=(a*20)/100;
		da=(a*50)/100;
	}
	
	gross_salary=hra+da+a;
	
	printf("gross salary :- %f",gross_salary);
}