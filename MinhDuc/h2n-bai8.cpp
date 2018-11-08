#include <stdio.h>
int main()
{
    int A[100],n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
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
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
