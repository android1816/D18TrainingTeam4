#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float a,b,c, del, x1,x2;
printf("\nNhap cac he so a,b,c (trong ax^2 + bx +c): ");
scanf("%f%f%f",&a,&b,&c);
del = b*b-4*a*c;
if(del==0)
	printf("\nPhuong trinh co nghiem kep x = %5.5f", -b/(2*a));
else if(del > 0)
{ 
	x1 =(-b-sqrt(del))/(2*a);
	x2 =(-b+sqrt(del))/(2*a);
	if (x1<x2)	
		printf("\nPhuong trinh co 2 nghiem phan biet\\n x1= %5.5f \n x2= %5.5f",x1,x2);
	else if (x1>x2)
		printf("\nPhuong trinh co 2 nghiem phan biet\\n x2= %5.5f \n x1= %5.5f",x2,x1);
}

else
	printf("vo nghiem");

return 0;
}
