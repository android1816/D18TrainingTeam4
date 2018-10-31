#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,denta,x1,x2;
	printf("nhap ba so :");
	scanf("%f %f %f",&a ,&b ,&c);
	denta =b*b - 4*a*c;
if (a==0 && b==0 && c==0)
	printf("phuong trinh vo so nghiem");
else 
	printf("phuowng trinh co nghiem phuc");
if (denta >= 0)
	{
	x1 =(-b - sqrt(denta))/(2*a);
	x2 =(-b + sqrt(denta))/(2*a);
	printf("x1 = %.5f\n", x1);
	printf("x2 = %.5f\n", x2);}
else
	printf("vo nghiem");
    return 0;
}
//code by hieu


