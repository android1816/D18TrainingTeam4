#include <stdio.h>
#include <math.h>
int main(void)
{
	int m,n,k,i,a[10000];
	long long b=1,j=1;
	scanf("%d%d",&n,&k);
	m=n;
	for(i=n-k+1;i<=n;i++)
	{
		a[i]=m;
		m--;
		b=b*a[i];
	}
	for(i=1;i<=k;i++)
	{
		j=j*i;
	}
	printf("%lld",b/j);
}


