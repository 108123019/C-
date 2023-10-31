#include<stdio.h>
int main()
{
	int a[100],t,i,n,k,j;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter values");
	for(i=0;i<n;i++)
	  {
	  scanf("%d",&a[i]);
      }
    for(j=0;j<=n-1;j++)
    for(k=0;k<n-j-1;k++)
    {
    	if(a[k]>a[k+1])
    	{
    		t=a[k];
    		a[k]=a[k+1];
    		a[k+1]=t;
		}
	}
	for(i=0;i<n;i++)
	  if(a[i]!=i+1)
	  {
	  	printf("missing num is %d",i+1);
	  }
}