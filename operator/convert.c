#include<stdio.h>
int main()
{
	char c,a=0;
	
	printf("enter the character:-");
	scanf("%c",&c);
	//A AND Z
	if(c>=65&&c<=90)
	{
		a=c+32;
		printf("%c",a);
	}
	else
	{
		a=c-32;
		//a abd z
		if(c>=97&&c<=122)
		{
			printf("%c",a);
		}	
	}
}