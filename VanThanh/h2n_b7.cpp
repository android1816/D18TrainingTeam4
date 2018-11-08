#include<stdio.h>


int main()
{
	int n,k;
	long long a;
	scanf("%d%d%lld",&n,&k,&a);
	long long m[n], m2[n+1];
	
	for(int i=1;i<=n;i++)  scanf("%lld",&m[i]);
	
	for(int i=1;i<k;i++)  m2[i]=m[i];
	
	m2[k]=a;
	
	for(int i=k+1;i<=n+1;i++)  m2[i]=m[i-1];
	
	for(int i=1;i<=n+1;i++)  printf("%lld ",m2[i]);

	return 0;
}


