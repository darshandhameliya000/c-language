#include<stdio.h>
int main()
{
	int number[5];
	for(int i=0;i<5;i++)
	{
		printf("enter the value %d:-",i);
		scanf("%d",&number[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("the element %d value %d\n",i,number[i]);
	}
}