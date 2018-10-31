#include <stdio.h>
#include <math.h>
int main()
{
	long a;
	printf("Luong truoc thue: ");
	scanf("%ld",&a);
	if (9*pow(10,6)<=a<5*pow(10,7)){
		printf("tinh thu nhap thue 10 %%");
	}
	else if (5*pow(10,7)<=pow(10,9)){
		printf("tinh thu nhap thue 30 %%");
	}
	else if(a>=pow(10,9)){
		printf("tinh thu nhap thue 50 %%");
	}
}



