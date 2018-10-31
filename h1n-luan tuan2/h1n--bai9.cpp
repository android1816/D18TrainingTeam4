#include <stdio.h>
#include <math.h>
main(){
	double a,b,c,d,e,f;
	scanf("%lf%lf%lf%lf%lf%lf", &a,&b,&c,&d,&e,&f);
	double m=a*e-b*d, n=c*e-b*f, q=f*a-c*d;
	if(a<=0 && b<=0 && c<=0){
		printf("so khong hop le.");
		}
	else if(m==0){
			if(n!=0 && q!=0){
				printf("vo nghiem");
							}
			else{
				printf("vo so nghiem");
				}}
	else{
		double x=n/m, y=q/m;
		printf("He co 1 nghiem: (%.5lf,%.5lf)", x,y);
		}			
	}
