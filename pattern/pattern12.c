#include<stdio.h>
int main()
{
	char i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}

}