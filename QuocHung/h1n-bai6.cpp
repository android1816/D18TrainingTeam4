#include <stdio.h>
int main(){
	int a, b, c, d, s;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	s=(a+b+c+d)/4;
	if(s>=9) printf("xuat sac"); 
	if( 8<=s && s<9 ) printf("gioi");
	if( 7<=s && s<8 ) printf("kha");
	if( 6<=s && s<7 ) printf("trung binh kha"); 
	if( 5<=s && s<6 ) printf("trung binh"); 
	else printf("yeu");
}
