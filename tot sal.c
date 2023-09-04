#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter basic salary:");
	scanf("%d",&a);
	b=0.45*a;
	c=0.16*a;
	printf("da is %d",b);
	printf("hra is %d",c);
	d=a+b+c;
	printf("tot sal is %d",d);
	
}
