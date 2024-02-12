#include<stdio.h>
int main()
{
	int number[2][2];
	for(int i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element:-");
			scanf("%d",&number[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the [%d][%d] element %d\n",i,j,name[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",name[i][j]);
		}
		printf("\n");
	}
}
