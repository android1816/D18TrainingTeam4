#include <stdio.h>
#include <math.h>
int main()
{
   int n, dem=0;
   scanf("%d", &n);
   for(int i=1; i<n; i++)
   if(n%i==0) dem+=i;
   if(dem!=n) printf("-1");
   else
    {
   	    for(int i=1; i<n; i++)
   	    if(n%i==0) printf("%d ", i);
   	}
   return 0;
}


