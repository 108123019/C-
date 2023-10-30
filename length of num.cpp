#include<stdio.h>
int main()
{
	int a,n=0;
	printf("enter a number");
	scanf("%d",&a);
	while(a!=0)
	{
	a/=10;
	n+=1;
	}
	printf("no of digits is %d",n);

}
