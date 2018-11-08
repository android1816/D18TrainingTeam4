#include<stdio.h>

int main()
{
	int n,x;
	scanf("%d",&n);
	long long m[n];
	long long dao;
	for(int i=1;i<=n;i++)
		scanf("%lld",&m[i]);
	if (n%2==0) x=n/2;
	else	x=(n-1)/2;
	for (int i=0 ;i<=x;i++)
	{
		dao=m[i];
		m[i]=m[n-i];
		m[n-i]=dao;
	}
	for (int i=0;i<n;i++) 
		printf("%lld ",m[i]);
	

	return 0;
}
