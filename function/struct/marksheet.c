#include<stdio.h>
#include<string.h>
struct student
{
	int id, eng,hindi,state,total;
	char name[15];
};
struct student d;
int main()
{
	struct student s[2];
	for(int i=0;i<2;i++)
	{
		printf("\nenter the  id:-");
		scanf("%d",&s[i].id);
		printf("\nenter the name:-");
		scanf("%s",s[i].name);
		printf("\nenter the eng marks:-");
		scanf("%d",&s[i].eng);
		printf("\nenter the hindi marks:-");
		scanf("%d",&s[i].hindi);
		printf("\nenter the state marks:-");
		scanf("%d",&s[i].state);	
	}
	for(int i=0;i<2;i++)
	{
		printf("\nid:-%d",s[i].id);
		
		printf("\nname:-%s",s[i].name);
		
		printf("\neng marks:-%d",s[i].eng);
		
		printf("\nhindi marks:-%d",s[i].hindi);
		
		printf("\nstate marks:-%d",s[i].state);
		
		d.total=s[i].eng+s[i].hindi+s[i].state;
		printf("\ntotal is :-%d\n\n",d.total);
	}
	
	return 0;
}
