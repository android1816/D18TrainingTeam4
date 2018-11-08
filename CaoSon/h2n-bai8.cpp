#include <stdio.h>
#include <math.h>
int main(void)
{
	long long n,a[100000],c=0,i;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n/2;i++)
	{
		c=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=c;
	}
	for(i=1;i<=n;i++)
	{
		printf("%lld ",a[i]);
	}
}


