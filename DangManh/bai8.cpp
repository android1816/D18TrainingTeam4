#include <stdio.h>;
#include <math.h>;
int main(){
	int a,b;
	float S;
	printf("nhap 2 so a va b: ");
	scanf("%d%d",&a,&b);
	S=(a/7+pow(a,2)*b-sqrt(abs(a-b))+pow(b,5))*(2*a+4*b);
	printf("%.4f",S);
	return 0;
}

