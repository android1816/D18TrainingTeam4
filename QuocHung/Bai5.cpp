#include <stdio.h>
#include <math.h>
int main (){
	double a, b, c, s;
	scanf("%lf%lf%lf", &a, &b, &c);
	s=4*(sqrt(a*b/c)+sqrt(a*c/b)+sqrt(b*c/a));
	printf("%lf",s);
}
