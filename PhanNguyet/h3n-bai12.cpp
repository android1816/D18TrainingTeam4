#include <stdio.h>
int main() {
	int n,d,m;
	scanf("%d",&n);
	d=0;
	m=n;
	while (m>0) {
		d = d * 10 + m % 10;
		m = m / 10;
	}
	if (d == n) printf("1");
	else printf("-1");
return 0;
}
