#include <stdio.h>
#include <math.h>

int main()
{
long long a;
	printf("nhap so nguyen a = ");
	scanf("%lld",&a);
	if (9 * pow(10,6) <= a && a < 5 * pow(10,7))
		{printf("luong = %lld\n", 0.9*a);}
	else if (5 * pow(10,7) <= a && a < pow(10,9))
		{printf("luong = %lld\n", 0.7*a);}
	else (pow(10,9) <= a && a < pow(10,18));
		printf("luong = %lld", 0.5*a);

    return 0;
}
//code by hieu


