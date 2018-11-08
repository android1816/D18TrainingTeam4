#include <stdio.h>
int main() {
	int n,k,S,s1,s2,s3;
	s1=1;
	s2=1; 
	s3=1;
	scanf ("%d %d", &n, &k);
	if (0<k && k<n && n<21){
		for (int i1 = 1 ; i1 <= n ; i1 ++){
			s1 = s1 * i1;
		}
		for (int i2 = 1 ; i2 <= (n-k) ; i2 ++){
			s2 = s2 * i2;
		}
		for (int i3 = 1 ; i3 <= k ; i3 ++){
			s3 = s3 * i3;
		}
		S= s1 / (s2 * s3);
		printf ("%d", S);
	}
	return 0;
}

