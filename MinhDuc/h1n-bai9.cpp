//Code By PMD
#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d,e,f;
	float x,y;
       printf ("nhap gia tri a b c d e f : ");
       scanf ("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
       y=(float)(f*a-d*c)/(a*e-b*d);
       x=(float)(c-b*y)/a;
    if (a/d==b/e && b/e!=c/f ) printf ("vo nghiem");
    else
    if (a/d==b/e && b/e==c/f ) printf (" vo so nghiem");
    else
	    printf ("nghiem cua he la (%.5f , %.5f) ",x,y);
	return 0;	 


}
//Code By PMD

