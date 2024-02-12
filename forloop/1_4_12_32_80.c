#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=1,j=1;i<=n;i++,j*=2)
	{
		sum=i*j;
		printf("%d\n",sum);
	}
}