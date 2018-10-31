#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{ 
float a,b,c,s,p,q;
printf("Nhap so do 3 canh cua tam giac ");
printf("\na = "); 
scanf("%f", &a);
printf("\nb = "); 
scanf("%f", &b);
printf("\nc = "); 
scanf("%f", &c);

if((a+b>c)&&(a+c>b)&&(b+c>a))
{
	p = a+b+c; q = p/2;
	s = sqrt(q*(q-a)*(q-b)*(q-c));
	printf(" dien tich la %5.2f ",s);
}
else
	printf("-1");

return 0;
}
