#include <stdio.h>
main() {
   int n, i, j, x, dem;
   int a[1000];
   scanf("%d%d", &n, &x);
   for(int i=0; i<n; i++)
   scanf("%d", &a[i]);
   dem = 0;
   while(i<=n-1) {
   	    if(a[i]==x) {
   	    	for( j=i; j<n-1; j++) {
				a[j]=a[j+1];
   	    	    dem++;
   	    	}
   	    	n--;
   	    	j=i;
   	    }
   	    else i++;
   	}
   	for(i=0; i<n; i++) {
	   printf("%d ", a[i]);
	}
}
