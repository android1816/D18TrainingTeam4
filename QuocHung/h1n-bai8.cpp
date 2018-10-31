#include <stdio.h>
#include <math.h>
int main(){
	long long a, b, c, d;
	double x1, x2;
	scanf("%lld %lld %lld", &a, &b, &c);
	if(a==0 && b==0 & c==0) printf("vo so nghiem");
	d=b*b-4*a*c;
	if(d==0) 
	{
		x1=-b/(2*a);
		printf("1\n%.5lf", x1);
	}
	if(d>0) 
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("2\n%.5lf\n%.5lf", x1, x2);
	}
	if(d<0) printf("vo nghiem");
}
