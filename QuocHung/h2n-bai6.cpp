#include <stdio.h>
#include <math.h>
int main()
{
	int n, s=1;
	scanf("%d", &n);
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) s=s+i+n/i;
		if(n==i*i) s-=i;
	}
	if(s==n)
	{
		for(int i=1; i<n; i++)
		{
			if(n%i==0) printf("%d ", i);
		}
	}
	else printf("-1");
	return 0;
}

