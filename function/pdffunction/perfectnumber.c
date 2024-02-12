#include<stdio.h>
int reverse()
{
	int n,b;
	printf("enetr the value is :-");
	scanf("%d",&n);
	
	while(n>0)
	{
		b=n%10;
		printf("%d",b);
		n=n/10;
	}
}
int main()
{
	reverse();
	return 0;
}
