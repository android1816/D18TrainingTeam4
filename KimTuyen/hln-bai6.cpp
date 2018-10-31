#include <stdio.h>
int main()
{
	float a,b,c,d,TB;
	printf("Nhap diem 4 mon hoc: ");
	scanf("%f%f%f%f", &a,&b,&c,&d);
	TB=(a+b+c+d)/4;
	printf("Diem trung binh: ");
	{
	if(TB>=9) printf("%.1f Xuat sac", TB);
	else
	if(TB<9 && TB>=8) printf("%.1f Gioi", TB);
	else
	if(TB<8 && TB>=7) printf("%.1g Kha", TB);
	else
	if(TB<7 && TB>=6) printf("%.1f Trung binh kha", TB);
	else
	if(TB<6 && TB>=5) printf("%.1f Trung binh", TB);
	else printf("%.1f Yeu", TB);
	}
	return 0;
}


