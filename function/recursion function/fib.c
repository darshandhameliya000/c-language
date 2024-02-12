include<stdio.h>
int fectorial(int number)
{
	if(number==1 ||number==0)
	{
		return 1;
	}
	else
	{
		return number*fectorial(number-1)+fectorial(number-2);
	}
}
int main()
{
	int num=5;
	int total=fectorial(num);
	printf("is number %d fectorial is %d \n",num,total);
	return 0;
}

