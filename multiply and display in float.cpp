#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter 2 floating num:");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("product in int %d ",int (c));
	printf("product in float %f",c);
}
