#include<stdio.h>
int main()
{
	int n,i=1,total=0;
	
	printf("enter the value:-");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==!0)
		{
			total+=i;
		}
		i++;
	}
	printf("%d\n",total);
	return 0;
}