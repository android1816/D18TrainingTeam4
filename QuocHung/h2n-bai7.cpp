#include <stdio.h>

int main()
{
	int n, k, x, a[n+69];
	scanf("%d %d %d", &n, &k, &x);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	
	for(int i=n; i>=k; i--)
		a[i]=a[i-1];
	a[k-1]=x;
	
	for(int i=0; i<=n; i++) printf("%d ", a[i]);	
	return 0;
}

