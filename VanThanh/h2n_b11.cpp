#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,a[100006],b[100006];
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
	for(int j=0;j<m;j++)	scanf("%d",&b[j]);
	
	sort(a,a+n);
	sort(b,b+m);
	
	int i = 0; 
	int j = 0; 
	
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			printf("%d",a[i]);
			i++; 
		}
		else 
		{
			printf("%d",b[j]);
			j++; 
		}
	}
	
	int x=i,y=j;

	for(i=x;i<n;i++)	printf("%d",a[i]);

	for(j=y;j<m;j++)	printf("%d",b[j]);

	return 0;
}
