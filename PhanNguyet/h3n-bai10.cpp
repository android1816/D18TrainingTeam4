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
int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a < b) break;
	}
    int dem=0;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
		    dem++;
		    printf("%d ", i);
		}
	}
	if (dem == 0) printf("-1");
	return 0;
}
