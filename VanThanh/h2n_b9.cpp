#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,vt;
	long long x;
	scanf("%lld%lld",&n,&x);
	long long a[n];
	
	for(i=1;i<=n;i++) scanf("%lld",&a[i]);

	for(i=1;i<=n;i++)
		if(a[i]==x)
		{
			vt=i;
	
			for(i=vt;i<=n;i++) a[i]=a[i+1]; // dich chuyen

			i=vt;
			n--;
		}
	
	for(i=1;i<=n;i++) printf("%lld ",a[i]);
}
