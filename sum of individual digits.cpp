#include<stdio.h>
int main()
{
	int sum=0,a,b;
	printf("enter number");
	scanf("%d",&a);
	while(a!=0)
	{
	
	b=a%10;
	a/=10;
	sum+=b;
    }
    printf("sum of digits is %d",sum);
}
