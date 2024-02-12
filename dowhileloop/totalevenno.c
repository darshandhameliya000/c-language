#include<stdio.h>
int main()
{
	int i=1,n,total=0;
	printf("enter the value:-");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
			total+=i;
		}
		i++;
	}while(i<=n);
	printf("%d\n",total);
}
		