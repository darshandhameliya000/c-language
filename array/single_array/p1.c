#include<stdio.h>
int main()
{
	int a[5];
	int b[5];
	for(int i=0;i<5;i++)
	{
		printf("enter the value a%d:-",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(int j=0;j<5;j++)
	{
		printf("enter the value b%d:-",j);
		scanf("%d",&b[j]);
	}
} 