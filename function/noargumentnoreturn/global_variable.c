#include<stdio.h>

int g1=50;
int g2=60;
int g3=70;

void marksheet()
{
	int total=0;
	float per=0;
	
	total=g1+g2+g3;
	printf("total is:-%d",total);
	
	per=total*100/300;
	printf("\npercentage is:-%f",per);
}

void marksheet1()
{
	int guj=50;
	int state=60;
	int eng=60;
	
	int total=0;
	float per=0;
	
	total=guj+state+eng;
	printf("total is:-%d",total);
	
	per=total*100/300;
	printf("\npercentage is:-%f",per);
}

int main()
{
	marksheet1();
	return 0;
}