#include <stdio.h>
int main(){
	long long a, b, c, m;
	scanf("%lld%lld%lld", &a, &b, &c);
	if(a>b) m=a;
	else m=b;
	if(c>m) m=c; 
	printf("%lld", m);
}
