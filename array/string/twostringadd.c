#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int i,j;
	
	printf("enter the first string :-");
	scanf("%s",&str1);
	printf("enter the second string :-");
	scanf("%s",&str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			str1[i]=str2[j];
			i++;
		}
	}
	str1[i]='\0';
	printf("%s",str1);
	return 0;
}