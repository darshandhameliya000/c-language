#include<stdio.h>
int main()
{
	int i=1;
	char k='A';
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(i%2==0)
			{
				printf("%c ",k+32);
				k++;
			}
			else
			{
				printf("%c ",k++);
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}