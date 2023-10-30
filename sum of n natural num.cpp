#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter till which natural num to be added");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s+=i;
printf("sum is %d",s);
}
