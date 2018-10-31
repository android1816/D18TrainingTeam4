//Code By PMD
#include<stdio.h>

int main ()
{
    long long a,b,c,d,e,f;
    float x,y;
       printf ("nhap gia tri a b c d e f : ");
       scanf ("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
       y=(float)(f*a-d*c)/(a*e-b*d);
       x=(float)(c-b*y)/a;    
    if (0<=a && 0<=b && 0<=c) 
{
    if (a/d==b/e && b/e!=c/f ) printf ("vo nghiem");
    else
    if (a/d==b/e && b/e==c/f ) printf ("vo so nghiem");
    else
	   printf ("nghiem cua he la (%.5f , %.5f) ",x,y);
}
    return 0;	 

}
//Code By PMD

