//Bai5//
#include <stdio.h>
#include <math.h>

int main()
{
 int a,b,c;
 float S,p;
 printf ("nhap 3 so nguyen a,b,c:");
 scanf("%d%d%d",&a,&b,&c);
 
 	if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
 		{
 			p=(a+b+c)/2;
 			printf("Dien tich tam giac do la: %f",S=sqrt(p*(p-a)*(p-b)*(p-c)));
		 }
 	else
 		{
 			printf("-1");
		 }
}
