#include<stdio.h>
int main()
{
	int a,i,j,k;
	for(i=1;i<=5;i++)
	{
		
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",i);
			}
			printf("\n");
		}

			for(k=1;k<=i;k++)
			{
				printf("%d ",k);
			}
		
		printf("\n");
	}
}