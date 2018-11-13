#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[100006],b[100006];
	scanf("%d%d",&n,&m);
	
	for(int i=1;i<=n;i++)	scanf("%d",&a[i]);
	for(int j=1;j<=m;j++)	scanf("%d",&b[j]);
	
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	
	int i=1,j=1;
	
	while(i<=n && j<=m)
	{
		if(a[i]<b[j])
		{
			printf("%d ",a[i]);
			i++;
		}
		else
		{
			printf("%d ",b[j]);
			j++;
		}
	}
	
	if(n>m)
		for(i=m+1;i<=n;i++)	printf("%d ",a[i]);
	else
		for(i=n+1;i<=m;i++) printf("%d ",b[i]);
	
	return 0;
}
