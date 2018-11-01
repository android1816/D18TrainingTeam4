#include <stdio.h>
int main(){
	double a, b, c, d, s;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	s=(a+b+c+d)/4;
	if(s>=9) printf("xuat sac"); 
	else if( 8<=s && s<9 ) printf("gioi");
	else if( 7<=s && s<8 ) printf("kha");
	else if( 6<=s && s<7 ) printf("trung binh kha");
	else if( 5<=s && s<6 ) printf("trung binh"); 
	else printf("yeu");
}
