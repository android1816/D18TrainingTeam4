#include <stdio.h>
#define max 100000
int main()
{
    int n,k;
    long long a,A[100];
    scanf("%d %d %lld",&n,&k,&a);
    if (k>n || n>max) return 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=n;i>=k;i--)
	{
    	A[i]=A[i-1];
	}
	A[k]=a;
	n=n+1;
	for(int i=0; i<n; i++)
    {   
        printf("%d ", A[i]);
    }
    return 0;
}
