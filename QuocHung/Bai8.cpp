#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	double x;
	scanf("%d%d", &a, &b);
	x=(a/7 + a*a*b - sqrt(abs(a-b))+ pow(b,5)) * (2*a + 4*b);
	printf("%.4lf",x);
}
