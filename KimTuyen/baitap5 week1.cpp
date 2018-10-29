#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	long long S;
	scanf("%d\n%d\n%d", &a, &b, &c);
	S= sqrt(a*b*c)/a + sqrt(a*b*c)/b + sqrt(a*b*c)/c;
	printf("%lld", S);
	return 0;
}
	

