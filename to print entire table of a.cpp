#include<stdio.h>
int main()
{
	int a,b,c;
	printf("to print entire table of:");
	scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
    c=a*b;
	printf("%d x %d = %d\n",a,b,c);
    }
}
