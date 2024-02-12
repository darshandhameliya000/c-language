#include <stdio.h>

void pattern1(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern2(int k)
{	
	int i,j;
	
	for(i=k;i>=1;i--)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern3(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern4(char k)
{	
	char i,j;
	
	for(i='A';i<=k;i++)
	{
		for(j='A';j<=k;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}

void pattern5(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void pattern6(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2!=0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void pattern7(int k)
{	
	int i,j,n=1;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}
}

void pattern8(int k)
{	
	int i,j;
	char n='A';
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}

void pattern9(int k)
{	
	int i,j,n=11;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",n++);
		}
		n+=5;
		printf("\n");
	}
}

int main ()
{
	int k=5;
	pattern9(k);
	
	return 0;
}
