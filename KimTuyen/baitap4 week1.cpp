#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159
int main(){
	int x;
	float Stodam;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%d", &x);
	Stodam= PI*x*x - 2*x*x;
	printf("Dien tich phan to dam la: %.3f\n", Stodam);
	return 0;	
}

