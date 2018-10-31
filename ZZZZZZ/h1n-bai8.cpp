#include <stdio.h>
#include <math.h>
int main()
{
	long long a,b,c,denta;
	printf ("nhap a, b, c: ");
	scanf ("%lld %lld %lld", &a, &b, &c);
	denta=pow(b,2)-4*a*c;
	if (denta==0)
		{
			printf ("nghiem  duy nhat: %.5f", -b/(2*a));
		}
	else 
		{
			if (denta>0)
				{
					printf ("nghiem 1: %.5f \n", (-b-sqrt(denta))/(2*a) );
					printf ("nghiem 2: %.5f", (-b+sqrt(denta))/(2*a) );
				}
			else 
			{
				printf ("vo nghiem");
			}
		}
	

	return 0;
}

