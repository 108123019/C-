#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 sides of tri");
	scanf("%d %d %d",&a ,&b, &c);
	if(a==b && b==c)
	   printf("its equilateral");
	else if(a==b||b==c||a==c)
	   printf("its isosceles");
	else
	 printf("its scalene");
}
