#include <stdio.h>

int gt(int a)
{
	int n=1;
	for(int i=2;i<=a;i++)
		{
			n=n*i;
		}
	return n;
}
int main()
{
	int n,k,so;
	scanf("%d %d",&n,&k);
	if(n<0 || k<0) return 0;
	if(n>0 && k>0 && k>n) return 0;
	if(n>0 && k>0 && n>k)
	{
		so= (float)gt(n)/(gt(k)*gt(n-k));
	}
	printf("%d",so);
}
