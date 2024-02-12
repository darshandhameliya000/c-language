#include<stdio.h>
int main()
{
	int number[3][3],dia=0,upper=0,lower=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("enter the value %d:-",i);
			scanf("%d",&number[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(number[i]==number[j]) 
			{
				dia+=number[i][j];	
			}
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}
	printf("the total of the diagonal element:- %d\n",dia);
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(number[i]<number[j])
			{
				upper+=number[i][j];	
			}
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}
	printf("the total of the upper element:- %d\n",upper);
			
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(number[i]>number[j])
			{
				lower+=number[i][j];	
			}
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}
	printf("the total of the lower element:- %d\n",lower);
}
