#include<stdio.h>
int main()
{
	int a;
	printf("ente rthe value :- ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		printf("sunday");
		break;
		case 2:
		printf("monday");
		break;
		case 3:
		printf("tuesday");
		break;
		case 4:
		printf("wednesday");
		break;
		case 5:
		printf("thursday");
		break;
		case 6:
		printf("friday");
		break;
		case 7:
		printf("saturday");
		break;
		default:
		printf("this is not 1,2,3,4,5,6,7");
	}
	return 0;
}
