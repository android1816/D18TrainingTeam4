#include <stdio.h>
#include <math.h>
int main (){
	long long a, b, c, max1, max;
	scanf("%lld%lld%lld", &a, &b, &c);
	max1=(a+b+abs(a-b))/2;
	max=(c+max1+abs(c-max1))/2;
	printf("%lld",max);
}
