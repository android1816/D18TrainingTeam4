#include <stdio.h>
#include <math.h>
int main() {
	long long a,b,c;
	double d,x,y;
	printf("nhap di em: ");
	scanf ("%lld %lld %lld", &a, &b, &c);
	d= pow(b,2) - 4*a*c;
	if (d==0){
		x=y=-b/(2*a);
		printf ("1\n");
		printf ("%.5lf\n", x=y);
	}
	if (d>0){
		x=(-b-sqrt(d))/(2*a);
		y=(-b+sqrt(d))/(2*a);
		printf ("2\n");
		printf("%.5lf\n %.5lf",x,y);
	}
	if (d<0){
		printf ("vo nghiem");
	}
	return 0;
}
