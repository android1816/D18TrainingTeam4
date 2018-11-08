#include <stdio.h>

int main()
{
   int n, dem=0;
   scanf("%d", &n);
   for(int i=1; i<=n; i++)
   {
   	    if(n%i==0) dem++;
   }
   printf("%d", dem);
   return 0;
}


