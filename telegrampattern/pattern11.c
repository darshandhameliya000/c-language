#include<stdio.h>
int main()
{
	int i,j,k,a,b,c;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	for(a=6;a>=1;a--)
	{
		for(b=7-a;b>=1;b--)
		{
			printf(" ");
		}
		for(c=a;c>=1;c--)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	return 0;
}