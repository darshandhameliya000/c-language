#include<stdio.h>
int main()
{
	int i=10;
	if(i==10)
	{
		if(i<15)
		{
			printf("i is smallerthan 15 \n");
			if(i<12)
				printf("i is greater than 12");
			else
				printf("i is greater than 15");
		}
		return 0;
	}
}