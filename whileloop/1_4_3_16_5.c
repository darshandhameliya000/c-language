#include<stdio.h>
int main()
{
	int n,i=1;
	
	printf("enter the value:-");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i*i);	
			i++;
		}
		else
		{
			printf("%d\n",i);
			i++;
		}
		
	}
	return 0;
}