#include<stdio.h>
#include<string.h> 
struct student
{
	int amt,rate,qty,gst,netbill;
}; 
struct student d;
int main()
{
	struct student s[2];
	for(int i=0;i<1;i++)
	{
		scanf("%d\t%d",&s[i].rate,&s[i].qty);
	}
	for(int i=0;i<1;i++)
	{
		
		d.amt=s[i].rate*s[i].qty; 
		d.gst=d.amt*18/100;
		d.netbill=d.amt+d.gst;
		
		printf("rate\tqty\tamt\tgst\tnetbill");
		printf("\n%d\t%d\t%d\t%d\t%d",s[i].rate,s[i].qty,d.amt,d.gst,d.netbill);
	}
	return 0;
}
/*#include<stdio.h>
#include<string.h> 
struct student
{
	int amt,rate,qty,gst,netbill;
}; 
struct student d;
int main()
{
	struct student s[2];
	for(int i=0;i<1;i++)
	{
		printf("enter the rate:-");
		scanf("%d",&s[i].rate);
		printf("enter the qty:-");
		scanf("%d",&s[i].qty);
	}
	for(int i=0;i<1;i++)
	{
		printf("\nrate:-%d",s[i].rate); 
		printf("\nqty:-%d",s[i].qty); 
		d.amt=s[i].rate*s[i].qty; 
		d.gst=d.amt*18/100;
		d.netbill=d.amt+d.gst;
		printf("\namt is:-%d\n",d.amt);
		printf("\ngst is:-%d\n",d.gst);
		printf("\nnetbill is:-%d\n",d.netbill);
	}
	return 0;
}*/