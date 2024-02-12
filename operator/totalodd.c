#include<stdio.h>
int main()
{
	int i,n,total=0;
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==!0)
		
		total+=i;
	}
	printf("%d\n",total);
	return 0;
}

