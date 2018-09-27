#include <stdio.h>
#include <math.h>
int main (){
	long long a, b, c, max1, max, min1, min;
	scanf("%lld%lld%lld", &a, &b, &c);
	max1=(a+b+abs(a-b))/2;
	max=(c+max1+abs(c-max1))/2;
	min1=(a+b-abs(a-b))/2;
	min=(c+min1-abs(c-min1))/2;
	printf("%lld %lld", max, min);
}
