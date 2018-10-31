#include <stdio.h>
#include <math.h>
int main()
{
	long long A,B;
	float phantram;
	printf("Nhap luong truoc thue:");
	scanf("%lld", &A);
	if( 9*pow(10,6) <= A < 5*pow(10,7)) phantram=0.1;
	else if (5*pow(10,7) <= A < pow(10,9)) phantram=0.3;
	else if (pow(10,9) <= A) phantram=0.5;
	B=A*(1- phantram);
	printf("Luong sau thue: %lld", B);
	return 0;
}


