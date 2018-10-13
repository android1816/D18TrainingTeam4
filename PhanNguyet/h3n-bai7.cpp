#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		int m,x;
			m=2*i+1;
		    x=6*n-6*i-5;
		    for (int j=0; j<i; j++) printf (" ");
		    for (int j=0; j<m; j++) printf ("*");
		    for (int j=0; j<x; j++) printf (" ");
		    for (int j=0; j<m; j++) printf ("*");
		printf ("\n");
	}
	for (int i=n-2; i>=0; i--) {
		int m,x;
			m=2*i+1;
		    x=6*n-6*i-5;  
		    for (int j=0; j<i; j++) printf (" ");
		    for (int j=0; j<m; j++) printf ("*");
		    for (int j=0; j<x; j++) printf (" ");
		    for (int j=0; j<m; j++) printf ("*");
		printf ("\n");
	}
return 0;
}	    
		
