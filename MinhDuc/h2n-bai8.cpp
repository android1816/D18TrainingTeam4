#include <stdio.h>
int main()
{
    long long A[100000];
    int n;
    scanf("%ld", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&A[i]);
    }
    for(int i=0; i< n/2; i++)
    {
        int t = n - i - 1;
        int d = A[t];
        A[t] = A[i];
        A[i] = d;
    }
    for(int i=0; i<n; i++)
    {
        printf("%lld ", A[i]);
    }
    printf("\n");
    return 0;
}
