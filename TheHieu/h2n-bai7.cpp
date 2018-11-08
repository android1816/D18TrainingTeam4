#include <stdio.h>
#include <math.h>

int main()
{
	int n,k,i;
	long long a,b[10000];
	scanf ("%d %d %lld", &n,&k,&a);
	for (i=0; i<n; i++) {
	scanf ("%lld",b[i]);
	}
	for (i=n; i>=k; i--) {
		b[i] = b[i-1];
	}
	a = b[i];
	n++;
	
	for (i=0; i<n; i++) {
		printf ("%lld", b[i]);
	}
	
    return 0;
}
//code by hieu


