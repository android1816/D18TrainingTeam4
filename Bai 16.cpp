#include <stdio.h>
#include <math.h>
int main() {
	float a, b,c,d, tb;
	printf ("nhap di: ");
	scanf ("%f %f %f %f", &a, &b, &c, &d);
	tb= (a+b+c+d)/4;
	printf ("%f\n", tb);
	if (tb>= 9){
		printf ("xuat sac");
	}
	if (9>tb && tb>= 8){
		printf ("gioi");
	}
	if (8>tb && tb>=7){
		printf ("kha");
	}
	if (7>tb && tb>=6){
		printf ("trung binh kha");
	}
	if (6>tb && tb>=5){
		printf ("trung binh");
	}
	if (5>tb){
		printf ("yeu");
	}
	return 0;
}
	

