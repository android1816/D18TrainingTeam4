#include <stdio.h>
int main(){
	long long a, b, c, d, e, f, D, Dx, Dy;
	double x, y;
	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
 	D=a*e-d*b;
    Dx=c*e-f*b;
    Dy=a*e-d*c;
    x=Dx/D;
    y=Dy/D;
    if(D!=0) printf("%.5lf, %.5lf", x, y);
    if(Dx==0 && Dy==0) printf("vo so nghiem");
   	else printf("vo nghiem");
}
