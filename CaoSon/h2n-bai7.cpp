#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,k,i=0;
	long long a,b[100000];
	scanf("%d%d%lld",&n,&k,&a);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}
	for(i=n;i>=k;i--)
	{
		b[i]=b[i-1];
	}
	b[i]=a;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%lld ",b[i]);
	}
}


