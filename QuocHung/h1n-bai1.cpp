#include <stdio.h>
int main(){
	long long a, b, c, max, min;
	scanf("%lld%lld%lld", &a, &b, &c);

	if(a>b) max=a;
	else max=b;
	if(c>max) max=c; 
	
	if(a<b) min=a;
	else min=b;
	if(c<min) min=c; 
	
	printf("%lld %lld", max, min);
}
