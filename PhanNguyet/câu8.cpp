#include <stdio.h>
#include <math.h>
int main (){
	long long a,b,c,d;
	float x1,x2;
	scanf("%lld %lld %lld",&a,&b,&c);
	if (a==0) {
		if (b==0) {
		   if (c==0) printf("PT co vo so nghiem");
		   	else printf("PT vo nghiem");
		   }
		   else {
		    x1=-c/b;
			printf("PT co 1 nghiem la: %.2f",x1);
			}
	}
	else {
		d=b*b-4*a*c;
		if (d<0) printf("PT vo nghiem");
		if (d==0) {
		  x1=-b/(2*a);
		  printf("PT co 1 nghiem kep la: %.2f",x1);
		  }
		if (d>0)  {
		  x1=(-b+sqrt(d))/(2*a);
		  x2=(-b-sqrt(d))/(2*a);
		  printf("PT co 2 nghiem la: ");
		  printf("%.2f %.2f",x1,x2);
		 }	
	   }	  
return 0;
}	
