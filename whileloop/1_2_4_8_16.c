#include<stdio.h>
int main()
{
	int n,i=1;
	
	printf("enter the value:-");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		
		printf("%d\n",i);
		i*=2;
	}
	return 0;
}