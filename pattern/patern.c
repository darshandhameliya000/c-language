/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

    {#include <stdio.h>

int main()
{
   int n,s=1;
   printf("enter the number :");
   scanf("%d",&n);
 
    for  (int i=n; i>=1;i--)
    {
        for (int j=1;j<=s;j++)
        
            printf("*");
             
             for (int j=1;j<=n;j++)
             
                 printf(" ");
                 s+2;
                 for (int j=1;j<=i;j++)
                 printf("*")
             
        
       
        printf("\n");
    }
    
    s=7;
    for(int i=2;i<=5;i++)
	{
	
       for (int j=1;j<=i;j++)
	   printf("*");
	   for(j=1;j<=s;j++);
	   printf(" ");
	   for (int j=1;j<=i;j++)
	   printf("*");
	   printf("\n");
    }
   

    return 0;
}
