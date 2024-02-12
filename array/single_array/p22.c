#include<stdio.h>
int main()
{
	int s1[4],s2[4],s3[4],per1,per2,per3,i;
	
	for(i=0;i<3;i++)
	{
		printf("enter thr mark:");
		scanf("%d",&s1[i]);
		printf("enter thr mark:");
		scanf("%d",&s2[i]);
		printf("enter thr mark:");
		scanf("%d",&s3[i]);
	}
	for(i=0;i<1;i++)
	{
		per1=((s1[0]+s2[0]+s3[0])*100)/300;
		printf("%d\n",per1);
		per2=((s1[1]+s2[1]+s3[1])*100)/300;
		printf("%d\n",per2);
		per3=((s1[2]+s2[2]+s3[2])*100)/300;
		printf("%d\n",per3);
	}
return 0;
}