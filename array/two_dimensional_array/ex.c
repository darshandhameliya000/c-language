#include<stdio.h>
int main()
{
	int number[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("enter the value %d:-",i);
			scanf("%d",&number[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("enter the [%d][%d] value %d\n",i,j,number[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d",number[i][j]);
		}
		printf("\n");
	}
}