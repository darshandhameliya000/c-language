#include<stdio.h>
int main()
{
	int i=1,t1=0,t2=1,sum=t1+t2,n;
	printf("enter the value:-");
	scanf("%d",&n);
	do
	{
		printf("%d\n",sum);
		sum=t1+t2;
		t1=t2;
		t2=sum;
		i++;
		
		
	}while(i<=n);
	
	
}
	