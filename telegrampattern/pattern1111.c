#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("  ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d ",k);
		}
		if(i==2 || i==3 || i==4 || i==5)
		{
			for(k=2;k<=i;k++)
			{
				printf("%d ",k);
			}
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
	