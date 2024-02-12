#include<stdio.h>
int main()
{
	int odd=0;
	int even=0;
	int a[]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		if(i%2!=0)
			odd+=a[i];
		else
			even+=a[i];
	}
	printf("total of the even number is %d",even);
	printf("\ntotal of the odd number is %d",odd);
} 