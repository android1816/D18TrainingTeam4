#include <stdio.h>
int main() 
{
	int n,max,min;
	scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++) 
	    scanf("%d", &a[i]);
	max = a[0];
	for (int i=1; i<n; i++) {
		if (a[i] > max) 
		    max = a[i];
	}
	min = a[0];
	for (int i=1; i<n; i++) {
		if (a[i] < min) 
		    min = a[i];
	}
	printf("%d %d",max, min);
	return 0;
}
