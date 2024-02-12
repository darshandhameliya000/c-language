#include<stdio.h>
int main()
{
	char i,j,n=65;
	
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=69;j++)
		{
			printf("%c   ",n++);
		}
		printf("\n");
	}
}