#include <stdio.h>
int main()
{
	int a[100], posi, c, n, val;
	scanf ("%d", &n); //so phan tu
	scanf ("%d", &posi); //vi tri can them
    scanf ("%d", &val); //so them
    for (c=0; c<n; c++)
	{
		scanf ("%d", &a[c]);
	}
    for (c=n-1; c>=posi-1; c--)
    {
    	a[c+1]=a[c];
	}
	a[posi-1]=val;
	for (c=0; c<n+1; c++)
	{
		printf ("%d ", a[c]);
	}
	return 0;
}
