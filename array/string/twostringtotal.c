#include<stdio.h>
int main()
{
	char name1[6]={'s','k','i','l','l','\0'};
	char name2[5]={'q','o','d','e','\0'};
	char total;
	int i=0;
	while(name1[i]!='\0')
	{
		total=name1[6]+name2[5];
		printf("%c",total);
		i++;
	}
	return 0;
}