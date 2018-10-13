#include <stdio.h>
#include <math.h>
int isPrime(int n) {
	int i;
	if (n < 2) return 0;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int ktra(int n) {
	int m,d,s,x;
	m = n;
	d = 0;
	s = 0;
	while (m>0) {
		x = m % 10;
		d = d * 10 + x;
		s = s + x;
		if (x % 2 == 0) break;
		else m= m / 10;
	}
	if ((d == n) && ( isPrime(s) ) )return 1;
	else return 0;
}
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	int dem=0;
    for (int i=a; i<=b; i++) {
        if ( ktra(i) )
	       dem++;
    }
    printf ("%d",dem);
    printf ("\n");
    for (int i=a; i<=b; i++) {
        if ( ktra(i) )
            printf ("%d ",i);
    }        
return 0;
}
