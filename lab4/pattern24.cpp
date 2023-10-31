#include<stdio.h>
int main()
{
	int i=1,j,n,k=1;
	printf("enter no of rows:");
	scanf("%d",&n);
	if(i==1)
	for(j=1;j<=n;j++)
	{
	printf("%d",j);
	i++;
    }
    printf("\n");
	if(j==n+1)
	for(i=2;i<=n;i++)
	{
	printf("    %d\n",j);
	j++;
    }
}
	
