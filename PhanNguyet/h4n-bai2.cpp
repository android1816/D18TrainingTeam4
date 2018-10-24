#include <stdio.h>
int main()
{
	int n,k,a;
	scanf("%d%d%d",&n,&k,&a);
	int b[n+5];
	for (int i=0; i<n; i++) 
		scanf("%d", &b[i]);
	for (int i=n+1; i>=k; i--) {
		if (i==k) b[i]=a;
		else
	    b[i] = b[i-1];
	}
	for (int i=0; i<n+1; i++) 
	printf("%d ", b[i]);
	return 0;
}
