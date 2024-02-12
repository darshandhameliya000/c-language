#include<stdio.h>
int main()
{
	int a;
	printf("ente rthe value :- ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 10:
		printf("the value is 10");
		break;
		case 12:
		printf("the value is 12");
		break;
		case 15:
		printf("the value is 15");
		break;
		default:
		printf("this is not 10,12,15");
	}
	return 0;
}