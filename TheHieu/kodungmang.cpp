#include <stdio.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,tg;
	scanf ("%d %d",&n, &m);
	int a[n+5], b[m+5];
	for (i=0; i<n; i++) {
		scanf ("%d",&a[i]);
	}
	for (i=0; i<m; i++) {
		scanf ("%d",&b[i]);
	}
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			if(a[i] > b[j]) {
				tg = a[i];
				a[i] = b[j];
				b[j] = tg;
			}
		}
	}
	sort (a, a+n);
	sort (b, b+m);
	for (i=0; i<n; i++) {
		printf ("%d ",a[i]);
	}
	for (i=0; i<m; i++) {
		printf ("%d ",b[i]);
	}


    return 0;
}
//code by hieu


