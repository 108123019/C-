#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
	b=a%10;
	n=n*10+b;
	a/=10;
    }
printf("reversed num is %d",n);
}
