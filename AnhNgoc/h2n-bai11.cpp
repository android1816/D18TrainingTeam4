#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int n,m;
	scanf ("%d %d", &n, &m);
	int A[n], B[m];
	for (int i = 0; i<n; i++){
		scanf ("%d", &A[i]);
	}
	for (int j = 0; j<m; j++){
		scanf ("%d", &B[j]);
	}
	sort (A,A+n);
	sort (B,B+m);
	
	if (B[0]<=A[0]){
		printf ("%d ", B[0]);
		for (int j = 0; j<m-1; j++) {
			for (int i = 0; i<n; i++){
				if (B[j] <= A[i] && A[i] < B[j+1] ){
					printf ("%d ", A[i]);
				}
			}
			printf ("%d ", B[j+1]);	
		}
		for (int i=0; i<n; i++){
			if (B[m-1]<= A[i]){
				printf ("%d ", A[i]);
			}
		}
	}
	else if (B[0]>A[0]){
		printf ("%d ", A[0]);
		for ( int i = 0; i<n-1; i++) {
			for (int j=0; j<m; j++){
				if (A[i]<=B[j] && B[j] < A[i+1] ){
					printf ("%d ", B[j]);
				}
			}
			printf ("%d", A[i+1]);
		}
		for (int j=0; j<m; j++){
			if (A[n-1]< B[j]){
				printf ("%d ", B[j]);
			}
		}
	}

	return 0;
}
