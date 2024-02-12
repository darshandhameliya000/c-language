#include<stdio.h>
int fectorial(int number)
{
	if(number==1 ||number==0)
	{
		return 1;
	}
	else
	{
		return number*fectorial(number-1);
	}
}
/*int main()
{
	int num=5;
	int total=fectorial(num);
	printf("is number %d fectorial is %d \n",num,total);
	return 0;
}
*/
int sum(int arr[])
{
	int  total=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		total=total+arr[i];
	}
	return total;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,'\0'};
	int total=sum(arr);
	printf("the sum of array is :- %d\n",total);
	return 0;
}