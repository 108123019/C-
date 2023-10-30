#include<stdio.h>
#include<math.h>
int main()
{
	int a,b=1,rem,dec=0,i=0;
	printf("enter a binary num:");
	scanf("%d",&a);
	while(a!=0)
	{
	rem=a%10;
	dec=dec+rem*(pow(2,i));
	i++;
	a/=10;
	}
	printf("dec num is %d",dec);
}
