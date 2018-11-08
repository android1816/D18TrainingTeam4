#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,dem=0,a[10000];
	scanf ("%d",&n);
	for (i=0;i<n;i++) 
	{
		a[i]=i+1;
		int c=(n%a[i]);
		if(c==0)
			dem+=1;
	}	
	
	printf ("%d",dem);
}

