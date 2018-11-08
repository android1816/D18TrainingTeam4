#include <stdio.h>
main() {
	int n, k, x;
	int a[10000];
	scanf("%d%d%d", &n, &k, &x);
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	if (k<n) {
		for(int i=n; i>k; i--)
		   a[i]=a[i-1];
		   a[k]=x;
		   n++;
		for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	}
	else return 0;
}
