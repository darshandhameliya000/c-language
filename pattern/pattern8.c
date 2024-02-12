#include<stdio.h>
int main()
{
	char i,j,k=97;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==!0)
			{
				printf("%c ",k);
			}
			else
			{
				printf("%c ",k-32);
			}
			k++;
		}
		printf("\n");
	}

}