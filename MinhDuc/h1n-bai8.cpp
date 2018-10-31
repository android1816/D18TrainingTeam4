//Code By PMD
#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d;
	float x1,x2,t,n;
    printf ("nhap gia tri a b c : ");
    scanf ("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    t=(float)-c/b;
    n=(float)-b/(2*a);
    if (a==0 && b==0 && c==0) printf ("vo so nghiem");
    else
    if (a==0) printf ("nghiem duy nhat %.5f",t);
    else 
{
	if (d==0) printf ("nghiem kep %.5f\n",n);
    else
{
    if (d<0) printf ("vo nghiem");
    if (d>0) printf ("2 nghiem phan biet \n");
             printf ("%.5f\n",x1=(-b-sqrt(d))/(2*a));
             printf ("%.5f\n",x2=(-b+sqrt(d))/(2*a));
}
}
   return 0;
}
//Code By PMD

