#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	    printf("*");
       }
       for(k=1;k<=(n/2)-i;k++)
	    printf(" ");
    
	   for(k=1;k<=(n/2)-i;k++)
	    printf(" ");
	   for(j=1;j<=i;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }   
	for(i=1;i<=n/2;i++)
	{
	   for(j=1;j<=(n/2)-i+1;j++)
	   {
	    printf("*");
       }
       	for(k=1;k<=i-1;k++)
		printf(" ");
		for(k=1;k<=i-1;k++)
		printf(" ");
	   for(j=1;j<=(n/2)-i+1;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }    
}
