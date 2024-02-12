#include<stdio.h>
int main()
{
	int a;
	float pi=3.14;
	
	printf("area of radius is :-");
	scanf("%f",&a);
	
	printf("the area of circle is :- %d\n",a);
	float area=pi*a*a;
	
	printf("The area of the given circle is %f", area);
    return 0;
	
} 