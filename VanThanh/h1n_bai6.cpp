#include<stdio.h>
int main()
{
	int a,b,c,d;
	float tb;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	tb=float((a+b+c+d)/4);
	if (tb>=9) printf("xuat sac");
	else
		if (tb<9 && tb>=8) printf("gioi");
		else
			if (tb<8 && tb>=7) printf("kha");
			else
				if (tb<7 && tb>=6) printf("trung binh kha");
				else
					if (tb<6 && tb>=5) printf("trung binh");
					else printf("yeu");
	return 0;
}

