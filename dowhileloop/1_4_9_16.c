#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value:-");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i*i);
		i++;
	}while(i<=n);
}
		