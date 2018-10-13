#include <stdio.h>
int ktra(int n) {
	int s=0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			s = s + i;
		}
		if (s == n) return 1;
	}		
	return 0;
}
int main() {
	int n;
	scanf("%d",&n);
	if ( ktra(n) ) {
		for (int i=1; i < n; i++) {
			if (n % i == 0 ) 
			    printf ("%d ", i);
		}
	}
	else printf ("-1");	
return 0;
}
