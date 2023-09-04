#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the sur charge:");
	scanf("%d",&a);
	printf("enter the rate:");
	scanf("%d",&b);
    printf("enter the time:");
    scanf("%d",&c);
    d=a+(b*c);
    printf("total electric bill: %d",d);
}
