#include<stdio.h>
int main()
{
	int a,b,c,total;
	
	printf("enter the first value :- ");
	scanf("%d",&a);
	
	printf("enter the second value :- ");
	scanf("%d",&b);
	
	printf("enter the third value :- ");
	scanf("%d",&c);
	
	total=a*b*c/100;
	
	printf("the value is:- %d",total);
	return 0;
	
}