#include <stdio.h>
int main()
{
  
    int n,i,j; 
    long long x,a[100];
        scanf("%lld %lld",&n,&x);
    for(i = 0; i < n; i++)
    {
		scanf("%lld",&a[i]);
	}
     for (i=n;i>=0;i--)                             
    {
        if (a[i] == x)                            
        {
            for (j = i; j < n ; j++)             
                a[j] = a[j + 1];
            n--;
        }                                  
    }
    for (i = 0; i < n; i++) 
    {
	 	printf("%lld ", a[i]);
	}
	return 0;
}
