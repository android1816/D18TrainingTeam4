#include <stdio.h>
int main ()
{
	int n, max, min, h,c, t,d;
	scanf ("%d", &n);
	int a[n+5][n+5];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
		    scanf ("%d", &a[i][j]);
	}
	max=a[0][0];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (a[i][j]>max){
			    max=a[i][j];
			    h=i;
				c=j;
			}
		}
	}
	printf ("%d %d %d",max,h,c);
	printf ("\n");

	min=a[n-1][n-1];
	for (int i=n-1; i>=0; i--) {
		for (int j=0; j>=0; j--) {   
			if (a[i][j]<min){
			    min=a[i][j];
			    t=i;
				d=j;
			}
		}
	}
	printf ("%d %d %d",min,t,d);
	return 0;
}
				
