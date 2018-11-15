# include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
int main() {
	int i,n ;
	scanf ("%d",&n );
	int a[n+5];
	for (int i=0; i<n; i++){
			scanf ("%d", &a[i]);
	}
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
		return 0;
}

