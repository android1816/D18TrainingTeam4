#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=2*n-1; i++) {
		for (int j=1; j<=2*n-1; j++) {
			int a,b;
			a=abs(n-i);
			b=abs(n-j);
			if (a>b) printf ("%d",a+1);
			else printf ("%d",b+1);
		}
		printf("\n");
	}
return 0;
}	
			
