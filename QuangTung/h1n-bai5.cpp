#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,denta;

	scanf ("%lld %lld %lld", &a, &b, &c);
	delta=b*b-4*a*c;
	if (delta==0)
	{
		printf ("nghiem  duy nhat: %.5f", -1.0*b/(2*a));
	}
	else 
	{
		if (denta>0)
		{
			printf ("nghiem 1: %.5f ",  1.0*(-b+sqrt(denta))/(2*a) );
			printf ("nghiem 2: %.5f"   ,  1.0*(-b-sqrt(denta))/(2*a) );
		}
		else 
		{
			printf ("vo nghiem");
		}
	}
	

	return 0;
}

