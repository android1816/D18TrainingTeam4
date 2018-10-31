#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,d,tb;
	printf("nhap diem cua hoc sinh: ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	tb=(a+b+c+d)/4;
	if(tb>=9)
	{
		printf("xuat sac");
	}
	else if(tb>=8 && tb<9)
	{
		printf("gioi");
	}
	else if(tb>=7 && tb<8)
	{
		printf("kha");
	}
	else if(tb>=6 && tb<7)
	{
		printf("trung binh kha");
	}
	else if(tb>=5 && tb<6)
	{
		printf("trung binh");
	}
	else
	{
		printf("kem");
	}
	return 0;

}

