#include<stdio.h>
int main()
{
	char name[]={'s','k','i','l','l','\0'};
	char name1[50];
	gets(name1);
	puts(name1);
	int i=0;
	while(name1[i]!='\0')
	{
		printf("%c",name1[i]);
		i++;
	}
	return 0;
}