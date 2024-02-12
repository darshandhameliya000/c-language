#include<stdio.h>
int main()
{
	int eng[5],hindi[5],state[5],total[5],per[5];
	int i;
	char grade[5];
	for(int i=0;i<5;i++)
	{
		printf("\nenter the %d student marks ---->\n",i+1);
		printf("enter the eng marks:-");
		scanf("%d",&eng[i]);
		printf("enter the hindi marks:-");
		scanf("%d",&hindi[i]);
		printf("enter the state marks:-");
		scanf("%d",&state[i]);
		total[i]=eng[i]+hindi[i]+state[i];
		per[i]=(total[i]*100)/300;
	}
	printf("\nNo.\tend\thindi\tstate\ttotal\tper\tgrade\n");
	for( i=0; i < 5; i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i+1,eng[i],hindi[i],state[i],total[i],per[i],grade[i]);
		if(per[i]<=35)
		{
			printf("fail");
		}
		else if(per[i]>=90)
		{
			printf("grade A");
		}
		else if(per[i]>=80)
		{
			printf("grade B");
		}
		else if(per[i]>=70)
		{
			printf("grade C");
		}
		else if(per[i]>=60)
		{
			printf("grade D");
		}
		else
		{
			printf("grade E");
		}
		
	}
return 0;
} 