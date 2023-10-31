#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%2!=0)
	{
	
	for(j=1;j<=7;j++)
	    if(j==7)
	    printf("%d",i+1);
	    else
	    printf("%d",i);
	    printf("\n");
	}
	else
	{
	
	   for(j=1;j<=7;j++)
	   if(j==1)
	   printf("%d",i+1);
	   else
	   printf("%d",i);
	   printf("\n");
    }
}
	
