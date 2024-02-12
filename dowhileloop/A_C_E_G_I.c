#include<stdio.h>
int main()
{
    char i='A',n;
	printf("enter the value:-");
	scanf("%c",&n);
	do
	{
		if(i%2!=0)
		{
			printf("%c\n",i);
		}
		i++;
	}while(i<='Z');
}
		