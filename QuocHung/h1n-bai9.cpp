#include <stdio.h>
int main(){
	long long a, b, c, d, e, f, D, Dx, Dy;
	double x, y;
	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
 	D=a*e-d*b;
    Dx=c*e-f*b;
    Dy=a*f-d*c;
    x=(double)Dx/D;
    y=(double)Dy/D;
    if(D!=0) printf("%.5lf, %.5lf", x, y);
    else if(Dx==0 && Dy==0) printf("vo so nghiem");
   	else printf("vo nghiem");
}
