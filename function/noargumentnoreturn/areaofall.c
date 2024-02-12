#include<stdio.h>
void circle()
{
	int a;
	float pi=3.14;
	
	printf("area of radius is:-");
	scanf("%d",&a);
	
	float area=pi*a*a;
	
	printf("the area of the given circle is:- %f",area);
}

void square()
{
	int a,area;
	
	printf("enter the length of size:-");
	scanf("%d",&a);
	
	area=a*a;
	
	printf("the value is:- %d",area);
}

void rectangle()
{
	int a,len,width;
	
	printf("enter the length:-");
	scanf("%d",&len);
	
	printf("enter the width:-");
	scanf("%d",&width);
	
	a=len*width;
	
	printf("the value is:- %d",a);
}


void triangle()
{
	int a,height,base;
	
	printf("enter the height:-");
	scanf("%d",&height);
	
	printf("enter the base:-");
	scanf("%d",&base);
	
	a=height*base/2;
	
	printf("the value is:- %d",a);
}

void calnetbill()
{
	int rate,qty;
	scanf("%d\t%d",&rate,&qty);
	
	int amt=rate*qty;
	int dis=amt*5/100;
	int billamt=amt-dis;
	int gst=billamt*18/100;
	int netbill=gst+billamt;
	
	printf("rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d",rate,qty,amt,dis,billamt,gst,netbill);
}

void simpleinterest()
{`
	int a,b,c,total;
	printf("enter the first value:-");
	scanf("%d",&a);
	printf("enter the first value:-");
	scanf("%d",&b);
	printf("enter the first value:-");
	scanf("%d",&c);
	total=a*b*c/100;
	printf("the value is:-%d",total);
	
}

void swapwiththirdvariable()
{
	int a,b,c;
	printf("before swap a1:-");
	scanf("%d",&a);
	
	printf("before swap a2:-");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("after swap b1:-%d",a);
	printf("\nafter swap b2:-%d",b);
}

void swapwithoutthirdvariable()
{
	int a,b;
	printf("before swap a1:-");
	scanf("%d",&a);
	
	printf("before swap a2:-");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap b1:-%d",a);
	printf("\nafter swap b2:-%d",b);
}


int main()
{
	swapwithoutthirdvariable();
	return 0;
}



