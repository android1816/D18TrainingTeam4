#include <stdio.h>

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void sapxep( int a[] , int n ){
	for (int i=0; i<n-1; i++){
		for ( int j=0; j<n-1; j++){
			if (a[j]<a[j+1]){
				swap (a[j], a[j+1]);
			}
		}
		for (int j=0; j<n; j++){
			printf ("%d ", a[j]);
		}
		printf ("\n");
	}
}


int main() {
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf ("%d", &a[i]);
}
	sapxep(a,n);
	return 0;
}

