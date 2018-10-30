#include <stdio.h>
int main (){
	long long a;
	scanf("%lld", &a);
	if(9000000 <= a && a < 50000000) printf("%lld", a*90/100);
	if(50000000 <= a && a < 1000000000 ) printf("%lld", a*70/100);
	if(a >= 1000000000 ) printf("%lld", a*50/100);
}
