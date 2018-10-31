#include <stdio.h>
#include <math.h>
int main()
{
	long long a;
	printf ("nhap muc luong ban dau: ");
	scanf ("%lld", &a);
	if ( (a>=9*pow(10,6)) && (a<5*pow(10,7)) )
		{
			printf ("muc luong sau thue la: %f", 0.9*a);
		}
	if ( (a>5*pow(10,7)) && (a<pow(10,9)) )
		{
			printf ("muc luong sau thue la: %f", 0.7*a);
		}
	if ( a>=pow(10,9))
		{
			printf ("muc luong sau thue la: %f", 0.5*a);
		}

	return 0;
}

