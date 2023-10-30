#include<stdio.h>
int main()
{
	int i,n,prod=1;
	printf("to find factorial of :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	prod=prod*i;
	printf("%d",prod);
}
