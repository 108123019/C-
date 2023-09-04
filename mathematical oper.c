#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter two numbers to perform mathematical computations");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum of given num is %d ",c);
	d=a-b;
	printf("difference is %d",d);
	e=a*b;
	printf("product is %d ",e);
	f=a/b;
	printf("quotient is %d ",f);
}
