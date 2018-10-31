#include <stdio.h>
#include <math.h>
main(){
	long long a,b,c,dt;
	float x1, x2;
	printf("Nhap ba so a,b,c cho phuong trinh\n");
	scanf("%lld%lld%lld", &a,&b,&c);
	if(a==0 && b==0 && c==0){
		printf("vo so nghiem");
		}
	dt=pow(b,2)-4*a*c;
	if(dt<0){
		printf("vo nghiem");
		}
	if(dt==0){
		x1=(-b)/(2*a);
		printf("1\n %.5f", x1);
		}
	if(dt>0){
		x1=((-b-sqrt(dt))/2*a);
		x2=((-b+sqrt(dt))/2*a);
		if(x1>x2){
			printf("2\n%.5f\n%.5f", x2,x1);}
		else{
			printf("2\n%.5f\n%.5f", x1,x2);}
		}
	}
