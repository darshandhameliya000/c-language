#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,sum=t1+t2;;
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d\n",sum);
		t1=t2;
		t2=sum;
		sum=t1+t2;
	}

}