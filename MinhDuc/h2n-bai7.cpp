#include <stdio.h>
int main()
{
    int n,k;
    long long a,A[100];
    scanf("%d %d %lld",&n,&k,&a);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=n;i>=k;i--)
	{
    	A[i]=A[i-1];
	if( i==k ) A[i-1] = a;
    }
	for(int i=0; i<=n; i++)
    {   
        printf("%d ", A[i]);
    }
    return 0;
}
    
