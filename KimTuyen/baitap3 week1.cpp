#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159
int main(){
	int r;
	float c, s;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%d", &r);
	c= 2*PI*r;
	s= PI*r*r;
	printf("Chu vi hinh tron la: %.3f\n", c);
	printf("Dien tich hinh tron la: %.3f", s);
	return 0;
}
