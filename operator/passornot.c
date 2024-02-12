#include<stdio.h>
int main()
{
	int  maths,account,english,total;
	float per;
	
	printf("enter the maths marks :- ");
	scanf("%d",&maths);
	
	printf("enter the account marks :- ");
	scanf("%d",&account);
	
	printf("enter the english marks :- ");
	scanf("%d",&english);
	
	total=maths+account+english;
	
	printf("total marks of student is :- %d",total);
	
	if(maths>36 && account>36 && english>36)
	{
		printf("\nstudent is pass");
		
		per=total*100/300;
		
		printf("\npercentage of a student =%f",per);
	}
	else
	{
		printf("\n student is fail");
	}
	return 0;
}
	
	
