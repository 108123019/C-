#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
	{
	   for(j=1;j<=(n/2)-i+1;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }   
    for(i=1;i<=(n/2);i++)
	{
	   for(j=1;j<=i;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }   
}
