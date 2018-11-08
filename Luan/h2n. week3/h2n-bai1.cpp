#include <stdio.h>
#include <math.h>
main() {
	int m,n,k,i;
	int a[10000];
	int b=1,d=1;
	scanf("%d%d",&n,&k);
	if (k>0 && n>0 && k<n && n<21) {
	m=n;
	for(i=n-k+1; i<=n; i++) {
		a[i]=m;
		m--;
		b=b*a[i];
	}
	for(i=1;i<=k;i++) {
		d=d*i;
	}
	long long c=b/d;
	printf("%lld", c);
}
}
