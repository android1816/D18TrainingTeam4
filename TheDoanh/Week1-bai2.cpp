#include <stdio.h>
int main()
{
	int a;
	long long b;
	char c;
	float d;
	double e;
	scanf ("%d\n%lld\n%c\n%f\n%lf", &a, &b, &c, &d, &e);
	printf ("%d\n%lld\n%c\n%.3f\n%.9lf", a, b, c, d, e);
}	
