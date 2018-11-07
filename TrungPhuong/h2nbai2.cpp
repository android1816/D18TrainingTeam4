#include <stdio.h>
int main() {
     int n, i ,dem;
    
     scanf("%d", &n);
     dem=0;
     for(i=1;i<=n;i++)
	 {
     	if(n % i ==0)
     	dem++;
     	
     	
	 }
     printf("%d",dem);
     
return 0;
}

