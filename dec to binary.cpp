#include<stdio.h>
int main()
{
	int a,bin,i=1,rem;
	printf("enter the decimal no:");
	scanf("%d",&a);
	while(a!=0)
	{
	rem=a%2;
	a/=2;
	bin=bin+rem*i;
	i=i*10;
    }
	printf("binary num is %d",bin);
}
