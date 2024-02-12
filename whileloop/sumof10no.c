#include<stdio.h>
int main()
{
	int i=1,total=0;
	
	while(i<=10)
	{
		total+=i;
		i++;
	}
	printf("%d\n",total);
	return 0;
}