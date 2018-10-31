#include <stdio.h>
#include <math.h>
int main()
{
	float a,c,b,d,e;
	printf("nhap diem a,b,c,d:");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	e=(a+b+c+d)/4;
	if (e>=9) {
		printf (" \n %f xuat sac",e);
	}
	else if (8<=e<9){
		printf ("\n %f gioi",e);
	}
	else if (7<=e<8){
		printf ("\n %f kha",e);
	}
	else if (6<=e<7){
		printf ("\n %f trung binh kha",e);
	}
	else if (5<=e<6){
		printf ("\n %f trung binh",e);
	}
	else {
		printf ("\n %f yeu",e);
	}
}



