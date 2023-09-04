#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 num:");
	scanf("%d %d",&a,&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("a is %d  b is %d",a,b);
}
