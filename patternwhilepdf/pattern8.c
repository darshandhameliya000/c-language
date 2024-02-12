#include<stdio.h>
int main()
{
	int i=65,n=65;
	
	while(i<=69)
	{
		int j=65;
		while(j<=69)
		{
			printf("%c\t",n++);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}