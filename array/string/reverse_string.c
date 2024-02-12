#include<stdio.h>
int main()
{
	char name1[50],name2[50];
	gets(name1);
	int i=0;
	
	while(name1[i]!='\0')
	{
		i++;
	}
	i--;
	int j=0;
	while(i>=0)
	{
		name2[j]=name1[i];
		j++;
		i--;
	}
	name2[j]='\0';
	printf("reverse string is :-%s\n",name2);
	return 0;
}