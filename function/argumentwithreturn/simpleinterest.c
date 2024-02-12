#include<stdio.h>

int g1=50;
int g2=60;
int g3=70;

int simpleinterest(int a,int b,int c)
{
	int interest;
	
	interest=a*b*c/100;
	return interest;
}

int marksheet(int eng,int guj,int state)
{
	int total;
	float per;
	
	total=eng+guj+state;
	per=total*100/300;
	printf("total is:-%d",total);
	
	return per;
	
}

int globalmarksheet(int g1,int g2,int g3)
{
	int total,per;
	
	total=g1+g2+g3;
	printf("total is:-%d",total);
	
	per=total*100/300;
	return per;
	
}


int main()
{
	int per=globalmarksheet(g1,g2,g3);
	printf("\npercentage is:-%d",per);
	
	return 0;
}
