#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float X;
	scanf("%d\n%d", &a, &b);
	X= (a/7 + a*a*b - sqrt(abs(a-b)) + b*b*b*b*b)*(2*a+4*b);
	printf("%.4f", X);
	return 0;
}
