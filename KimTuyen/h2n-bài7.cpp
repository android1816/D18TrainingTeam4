#include <stdio.h>
int main()
{
	int a[100], n, k;
	long long x;
	scanf("%d%d%d", &n, &k, &x);
	for(int i=0; i<n; i++)
	scanf("%d", &a[i]);
	if(k>=n) return 0;
	else
	{
		for(int i=n; i>k; i--)
		   a[i]=a[i-1];
		   a[k]=x;
		   n++;
		for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	}
	return 0;
}
