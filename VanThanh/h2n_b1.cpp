#include<stdio.h>

int gt(int n)
{
	int s=1;
	for(int i=2;i<=n;i++) 
		s*=i;
	return s;
}

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",gt(n)/(gt(k)*gt(n-k)));
	return 0;
}

