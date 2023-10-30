#include<stdio.h>
int main()
{
	int a,i,j,n;
	printf("enter no of rows");
	scanf("%d",&a);
	if(a%2==0)
	  n=a/2;
	else
	  n=(a/2)+1;
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	    printf("*");
       }
	printf("\n");
    } 
	for(i=1;i<=a/2;i++)
	{
	   for(j=1;j<=(a/2)-i+1;j++)
	   {
	    printf("*");
       }
	printf("\n");
    }     
}


