#include <stdio.h>

long long gt(int x)
{
	long long kq=1;
	for(int i=2; i<=x; i++)
		kq=kq*i;
	return kq;
}
int main()
{
	int n, k;
	long long ds;
	scanf("%d %d", &n, &k);
	ds=gt(n)/(gt(k)*gt(n-k));
	printf("%lld", ds);
	return 0;
}

