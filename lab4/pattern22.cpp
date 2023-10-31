#include<stdio.h>
int main()
{
	int i,j,k,x,n;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
	 for(j=1;j<=i;j++)
	 if(i==j)
	 printf("%d",i);
	 else
	 printf("%d*",i);
	 
	 printf("\n");
    }
    for(i=1;i<=n/2;i++)
	{
	 for(j=1;j<=(n/2)-i+1;j++)
	 if(i==(n/2)-j+1)
	 printf("%d",(n/2)-i+1);
	 else
	 printf("%d*",(n/2)-i+1);
	 
	 printf("\n");
    }
}
	
