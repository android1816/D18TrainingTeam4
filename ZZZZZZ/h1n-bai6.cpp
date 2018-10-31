#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,tb;
	printf ("nhap diem 4 mon: ");
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	tb=(a+b+c+d)/4;
	if (tb>=9)
		{
			printf ("xuat sac");
		}
	if ( (tb>=8) && (tb<9) )
		{
			printf ("gioi");
		}
	if ( (tb>=7) && (tb<8) )
		{
			printf ("kha");
		}
	if ( (tb>=6) && (tb<7) )
		{
			printf ("turng binh kha");
		}
	if ( (tb>=5) && (tb<6) )
		{
			printf ("trung binh");
		}
	if (tb<5)
		{
			printf ("yeu");
		}
return 0;
}

