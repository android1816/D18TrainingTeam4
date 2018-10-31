#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float TB;
	printf("Nhap diem thi a,b,c,d: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	TB=(a+b+c+d)/4;
	if (TB>=9)
		printf("xuat sac");
	else if (8<=TB && TB<9)
		printf("gioi");
	else if (7<=TB && TB<8)
		printf("kha");
	else if (6<=TB && TB<7)
		printf("trung binh kha");
	else if (5<=TB && TB<6)
		printf("trung binh");
	else
		printf("yeu");
	return 0;
}
