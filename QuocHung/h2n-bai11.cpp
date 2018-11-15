#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, a[100000], b[100000];
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) scanf("%d", &a[i]);
	for(int j=1; j<=m; j++) scanf("%d", &b[j]);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		if(b[j]<a[i])
		{
			int tg=a[i];
			a[i]=b[j];
			b[j]=tg;
		}
	}
	
	sort(a+1, a+n+1);
	sort(b+1, b+m+1);
	
	for(int i=1; i<=n; i++) printf("%d ", a[i]);
	for(int j=1; j<=m; j++) printf("%d ", b[j]);
	return 0;
}

