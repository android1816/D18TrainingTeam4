#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a[100000];
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &a[i]);
	
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<=n-i; j++)
		if(a[j]<a[j+1])
		{
			int tg=a[j];
			a[j]=a[j+1];
			a[j+1]=tg;
		}
		
		for(int k=1; k<=n; k++)
			printf("%d ", a[k]);
		printf("\n");
	}
	return 0;
}

