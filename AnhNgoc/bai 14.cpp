#include <stdio.h>
 #include "math.h"
int main() {
	long long A;
	double B;
	printf ("nhap so A: ");
	scanf("%lld", &A);
	if (9*pow(10,6) <= A < 5*pow(10,7)){
		B = 0.9*A;
		printf ("%lf",B );
	}
	else if (5*pow(10,7) <= A < pow(10,9)){
		B = 0.7*A;
		printf ("%lf",B);
	}
	else B = 0.5*A;
		printf ("%lf",B);
		
	return 0;
}

