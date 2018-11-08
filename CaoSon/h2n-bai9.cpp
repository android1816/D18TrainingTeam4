#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	long long x,a[100000];
	scanf("%lld%lld",&n,&x);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n;)
	{
		if(a[i]==x)
		{
			for(j=i;j<=n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
		}
		else
		{
			i++;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%lld ",a[i]);
	}
}


