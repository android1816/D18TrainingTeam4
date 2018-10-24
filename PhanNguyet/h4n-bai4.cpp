#include <stdio.h>
int main () 
{
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++) 
	    scanf("%d", a+i);
	for (int i=n-2; i>=0; i--) {
		for (int j=0; j<=i; j++) {
			int t;
			if (a[j] < a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	    for (int i=0; i<n; i++) {
	        printf ("%d ", a[i]);
	    }
	    printf ("\n");
	}  
	return 0;
}  
