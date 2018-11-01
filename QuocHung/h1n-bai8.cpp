#include <stdio.h>
#include <math.h>
int main(){
	long long a, b, c, d;
	double x1, x2;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if(a==0)
	{
		if(b==0 && c!=0) printf("vo nghiem");
		else if(b==0 && c==0) printf("vo so nghiem");
		else
		{
			x1=(double)-c/b;
			printf("1\n%.5lf", x1);
		}
	}
	
	else
	{
		d=b*b-4*a*c;
		if(d==0) 
		{
			x1=(double)-b/(2*a);
			printf("1\n%.5lf", x1);
		}
		else if(d>0) 
		{
			x1=(double)(-b-sqrt(d))/(2*a);
			x2=(double)(-b+sqrt(d))/(2*a);
			printf("2\n%.5lf\n%.5lf", x1, x2);
		}
		else printf("vo nghiem");
	}
}
