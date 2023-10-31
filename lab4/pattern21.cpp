#include<stdio.h>
int main()
{
	int i,j,k,x,n,l;
	printf("enter no of rows:");
	scanf("%d",&n);
	printf("enter starting digit");
	scanf("%d",&l);
	for(i=1;i<=n/2;i++)
	{
	for(j=1;j<=i;j++)
	printf("%d",l);
	printf("\n");
	l++;
    }
    for(k=1;k<=n/2;k++)
    {
    	for(x=1;x<=(n/2)-k+1;x++)
    	printf("%d",l-1);
    	printf("\n");
    	l--;
	}
}
