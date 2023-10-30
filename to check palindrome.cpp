#include<stdio.h>
int main()
{
	int a,rev=0,n,rem;
	printf("enter a num");
	scanf("%d",&a);
	n=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	if(n==rev)
	  printf("it is palindrome");
	else
	  printf("it is not palindrome");
}
