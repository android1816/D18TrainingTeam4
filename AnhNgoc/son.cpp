#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,k,i=0;
	long long a,N[210100];
	scanf("%d%d%lld",&n,&k,&a);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&N[i]);
	}
	for(i=n;i>=k;i--)
	{
		N[i]=N[i-1];
	}
	N[i]=a;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%lld ",N[i]);
	}
}
