#include <conio.h>
#include <stdio.h>

int main()
{
    int A[100],n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i< n/2; i++)
    {
        int dao = n - i - 1;
        int tmp = A[dao];
        A[dao] = A[i];
        A[i] = tmp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%4d", A[i]);
    }
    printf("\n");

}
