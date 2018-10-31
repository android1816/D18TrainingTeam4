#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int a,b,c;
	printf ("moi ban nhap do dai 3 canh: ");
	scanf ("%d %d %d", &a, &b, &c);
	float p=(a+b+c)/2;
	if ( (a+b>c) && (a+c>b) && (b+c>a) )
		{
			printf ("la 3 canh cua tam giac\n");
			printf ("dien tich tam giac la: %f", sqrt( p*(p-a)*(p-b)*(p-c) ) );
		}
	else 
		{
			printf ("-1");
		}

	return 0;
}

