#include<stdio.h>

int g1=50;
int g2=60;
int g3=70;

void simpleinterest(int a,int b,int c)
{
	int interest;
	printf("enter the first value:-");
	scanf("%d",&a);
	printf("enter the second value:-");
	scanf("%d",&b);
	printf("enter the third value:-");
	scanf("%d",&c);
	
	interest=a*b*c/100;
	printf("the simpleinterest is:- %d",interest);
	
	
}

void marksheet(int eng,int guj,int state)
{
	int total;
	float per;
	
	total=eng+guj+state;
	printf("total is:-%d",total);
	
	per=total*100/300;
	printf("\npercentage is:-%f",per);
}

void globalmarksheet(int g1,int g2,int g3)
{
	int total;
	float per;
	
	total=g1+g2+g3;
	printf("total is:-%d",total);
	
	per=total*100/300;
	printf("\npercentage is:-%f",per);
}
	
int main()
{
	globalmarksheet(g1,g2,g3);
	
	return 0;
}



