#include<stdio.h>
int main()
{
	int i,j,k,a,b,c;
    for(a=1;a<=6;a++)
	{
		for(b=1;b<=7-a;b++)
		{
			printf("* ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
     for(i=6;i>=1;i--)
	{
		for(j=7-i;j>=1;j--)
		{
			printf("* ");
		}
		for(k=i;k>=1;k--)
		{
			printf("  ");
		}
		printf("\n");
		
	}
	
	
	return 0;
}