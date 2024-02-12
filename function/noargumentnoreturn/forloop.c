#include<stdio.h>
void print10to1()
{
	int i;
	for(i=10;i>0;i--)
	{
		printf("%d\n",i);
	}
}

void print51to99()
{
	int i;
	for(i=51;i<=99;i++)
	{
		printf("%d\n",i);
	}
}

void print1ton()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
}

void printnto1()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		printf("%d\n",i);
	}
}

void printminusnton()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=-n;i<n;i++)
	{
		printf("%d\n",i);
	}
}

void oddupto50()
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%2==!0)
		{
			printf("%d\n",i);
		}
	}
}

void evenupto50()
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}

void AtoZ()
{
	char i;

	for(i='A';i<='Z';i++)
	{
		printf("%c\n",i);
	}
}

void A65toZ90()
{
	char i;

	for(i='A';i<='Z';i++)
	{
		printf("%c--%d\n",i,i);
	}
}

void AatoZz()
{
	char i;

	for(i='A';i<='Z';i++)
	{
		printf("%c--%c\n",i,i+32);
	}
}

void total1to10()
{
	int i,total=0;
	
	for(i=1;i<=10;i++)
	{
		total+=i;	
	}
	printf("%d\n",total);
}

void totalodd1to10()
{
	int i,total=0;
	
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)
		{
			total+=i;	
		}
		printf("%d",i);
	}
	printf("=%d\n",total);
}

void totaleven1to10()
{
	int i,total=0;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			total+=i;	
		}
		printf("%d",i);
	}
	printf("=%d\n",total);
}

void p14()
{
	int n,i;
	printf("enter the number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
}

void p15()
{
	int n,i;
	printf("enter the number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i*i);
		}
		else
		{
			printf("%d\n",i);
		}
	}
}

void p16()
{
	int i,n;
	
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i*=2)
	{
		printf("%d\n",i);
	}
}
	
void p17()
{
	int i,j,n,sum=0;
	
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=1,j=1;i<=n;i++,j*=2)
	{
		sum=i*j;
		printf("%d\n",sum);
	}
}

void p18()
{
	int i,n;
	
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=65;i<=n;i++)
	{
		if(i%2==!0)
		{
			printf("%c\n",i);
		}
	}
}

void p19()
{
	int i,n,t1=0,t2=1,sum=t1+t2;
	
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",sum);
		t1=t2;
		t2=sum;
		sum=t1+t2;
	}
}

void p20()
{
	int i,n;
	
	printf("enter the values:-");
	scanf("%d",&n);
	
	for(i=65;i<=n;i++)
	{
		if(i%4==!0)
		{
			printf("%c\n",i);
		}
		else if(i%2==!0)
		{
			printf("%c\n",i+32);
		}
	}
}

int main()
{
	p20();
	return 0;
}
