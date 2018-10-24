#include <stdio.h>
int main() 
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n+5][n+5];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) 
		    scanf("%d", &a[i][j]);
	}
	for (int i=k; i<n-1; i++) {
		for (int j=0; j<n; j++) 
			a[i][j]=a[i+1][j];
	}
	for (int i=0; i<n; i++) {
		for (int j=k; j<n-1; j++) 
			a[i][j]=a[i][j+1];
	}
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-1; j++) {
		    printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
