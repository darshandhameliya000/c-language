#include<stdio.h>
int main()
{
	int odd=0;
	int even=0;
	int a[5];
	
	for(int i=0;i<5;i++)
	{
		if(i%2!=0)
			odd+=i;
		else
			even+=i;
	}
	printf("total of the even element is %d",even);
	printf("\ntotal of the odd element is %d",odd);
} 