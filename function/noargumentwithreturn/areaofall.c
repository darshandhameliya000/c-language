#include<stdio.h>
int circle()
{
	int a;
	float pi=3.14;
	
	printf("enter the radius is :-");
	scanf("%d",&a);
	
	float area=pi*a*a;
	printf("the area of circle is:- %f",area);
	
	return 0;
}
int square()
{
	int a,area;

	printf("enter the length of size:-");
	scanf("%d",&a);
	
	area=a*a;
	printf("the area of square is:- %d",area);
	
	return 0;
}

int rectangle()
{
	int a,len,width;
		
	printf("enter the length:-");
	scanf("%d",&len);
	
	printf("enter the width:-");
	scanf("%d",&width);
	
	a=len*width;
	printf("the area of circle is:- %d",a);
	
	return 0;
}

int triangle()
{
	int a,base,height;
		
	printf("enter the length:-");
	scanf("%d",&base);
	
	printf("enter the width:-");
	scanf("%d",&height);
	
	a=base*height/2;
	printf("the area of circle is:- %d",a);
	
	return 0;
}

int simpleintrest()
{
	int a,b,c,total;
	
	printf("enter the first value:-");
	scanf("%d",&a);
	printf("enter the second value:-");
	scanf("%d",&b);
	printf("enter the third value:-");
	scanf("%d",&c);
	total=a*b*c/100;
	
	printf("the value is:- %d",total);
	return 0;
}

int netbill()
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
	return 0;
}

int swapusingthirdvar()
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

	return 0;
}
	
int swapwithoutthirdvar()
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

	return 0;
}
int main()
{
	swapwithoutthirdvar();
}

