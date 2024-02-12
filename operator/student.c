#include<stdio.h>
int main()
{
	int java,python,web,total;
	float per;
	
	printf("enter a maths marks:-");
	scanf("%d",&java);
	
	printf("enter a python marks:-");
	scanf("%d",&python);
	
	printf("enter a web marks:-");
	scanf("%d",&web);
	
	total=java+python+web;
	
	printf("\ntotal of the student marks %d",total);
	
	per=total*100/300;
	
	printf("\npercentage of the student  %f",per);
	
	if(per>75)
	{
		printf("\ngrade A");
	}
	else if(per>=60)
	{
		printf("\ngrade B");
	}
	else if(per>=45)
	{
		printf("\ngrade C");
	}
	else if(per>=35)
	{
		printf("\ngrade D");
	}
	else if(per<35)
	{
		printf("\nFAIL");
	}
}