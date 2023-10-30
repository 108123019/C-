#include<stdio.h>
#include<math.h>
int main()
{
	int a,last,sum;
	printf("enter num:");
	scanf("%d",&a);
	last=a%10;
	while(a>=10)
	{
	a=a/10;
    }
	sum=a+last;
	printf("%d",sum);
}
