#include<stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	if(a==0) printf("%f khong thuoc so am hay so duong", a);
	if(a>0) printf("%f thuoc so duong", a);
	if(a<0) printf("%f thuoc so am", a);
	return 0;
}

