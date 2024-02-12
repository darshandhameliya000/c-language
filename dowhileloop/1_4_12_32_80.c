#include<stdio.h>
int main()
{
	int i=1,j=1,sum=0,n;
	
	do
	{
		sum=i*j;
		i++;
		j*=2;
		printf("%d\n",sum);
	}while(i<=n);
	
}
	