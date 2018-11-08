#include <stdio.h>
#include <math.h>

int main()
{
	int n,k,i;
	long long ngt=1,kgt=1,nkgt=1;
	int a[1000];
	scanf ("%d %d",&n,&k);
	for (i=0;i<n;i++) //n!
	{
		a[i]=i+1;
		ngt*=a[i];
	}
	
	for (i=0;i<k;i++) //k!
	{
		a[i]=i+1;
		kgt*=a[i];
	}
	
	for (i=0;i<(n-k);i++)  //(n-k)!
	{
		a[i]=i+1;
		nkgt*=a[i];
	}
	
	int c= (ngt)/(nkgt*kgt);
	printf("%d",c);
}

