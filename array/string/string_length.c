#include<stdio.h>
int main()
{
	char name[50];
	gets(name);
	int i=0;
	
	while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
	printf(" length is :- %d ",i);
}
