#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,a[100],b[100];
	scanf("%d%d", &n, &m);
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i=0 ; i<m ; i++)
	{
		scanf("%d", &b[i]);
	}
	
	sort(a,a+n);
	sort(b,b+m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<m ;j++)
		{
			if(b[j]<a[i])  swap(a[i], b[j]);
		}
	}
	
	sort(a,a+n);
	sort(b,b+m);
	
	for(int i=0 ; i<n ; i++)
	{
		printf("%d ",a[i]);
	}
	for (int i=0 ; i<m ; i++)
	{
		printf("%d ",b[i]);
	}
	
    return 0;
}


