//Bai9//
#include <stdio.h>
#include <math.h>

int main()
{
 long long a,b,c,d,e,f;
 float x,y;
 printf ("nhap he so a,b,c,d,e,f:");
 scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
 
 	if (0<=a && a< pow(10,18) && 0<=b && b< pow(10,18) && 0<c && c< pow(10,18)) 
 		{
 			if ((a/d)==(b/e))
 				{
 					if ((a/d)==(c/f)) printf("vo so nghiem");
 					else printf("vo nghiem");
				 }
			else
				{
					y=(float)(f*a-d*c)/(a*e-b*d);
					x=(float)(c-b*y)/a;
      				printf ("nghiem cua he la (%.5f , %.5f) ",x,y);
				}
		 }
 	else
 		{
 			printf("nhap lai");
		 }
}
