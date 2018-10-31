#include <stdio.h>
#include <math.h>
int main()
{
	long long a,b,c,d,e,f;
	printf ("nhap a, b, c, d, e, f: ");
	scanf ("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
	if (a*e==b*d)
		{
			if (a*f==c*d) 
				{
						printf ("vo so nghiem");
				}
			else 
				{
					printf ("vo nghiem");
				}
		
		}
	else 
		{
			printf ("(%.5f, %.5f)", 1.0*(e*c-b*f)/(a*e-b*d) , 1.0*(c*d-a*f)/(b*d-a*e) );
			
		}
	

return 0;
}

