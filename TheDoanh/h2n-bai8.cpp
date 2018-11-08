#include <stdio.h>

int main()
{
    int a[100], n, c, i;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    	scanf("%d", &a[i]);
    	
    for (i=0; i<(n/2);i++)
    	{
    		c=a[i];
    		a[i]=a[n-1-i];
    		a[n-1-i]=c;
		}
   	
   	for(i=0; i<n; i++) printf("%d ", a[i]);

}
