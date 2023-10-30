#include<stdio.h>
int main()
{
	int i,j,k,n,a;
	printf("enter no of rows");
	scanf("%d",&a);
	n=a/2;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i-1;k++)
		printf(" ");
	   for(j=1;j<=n-i+1;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }   
    for(i=1;i<=n;i++)
	{
	   for(k=1;k<=n-i;k++)
	    printf(" ");
	   for(j=1;j<=i;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }   
}
