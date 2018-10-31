#include<stdio.h>
int main()
{
	int a,b,c,d;
	float TB;
	printf("diem cac mon a,b,c,d la");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	TB=float((a+b+c+d)/4);
	if (TB>=9) printf("xuat sac");
	else
	if (TB<9 && TB>=8) printf("gioi");
		else
	if (TB<8 && TB>=7) printf("kha");
		else
	if (TB<7 && TB>=6) printf("trung binh kha");
		else
	if (TB<6 && TB>=5) printf("trung binh");
		else printf("yeu");
	return 0;
}
