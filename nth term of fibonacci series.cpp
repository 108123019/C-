#include<stdio.h>
int main()
{
	int a,t1=0,t2=1,newt=0,i;
	printf("enter which fibonacci num u want:");
	scanf("%d",&a);
	if(a==0||a==1)
	printf("%d",a);
	else
	{
		for(i=3;i<=a;i++)
		{
		newt=t1;
		t1=t2;
		t2=newt+t1;
	    }
		printf("%d",t2);
	}
}
