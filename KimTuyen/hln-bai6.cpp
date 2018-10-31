#include <stdio.h>
int main()
{
	float a,b,c,d,TB;
	scanf("%f%f%f%f", &a,&b,&c,&d);
	TB=(a+b+c+d)/4;
	if(TB>=9) printf("Xuat sac");
	else if(TB<9 && TB>=8) printf("Gioi"); 
	else if(TB<8 && TB>=7) printf("Kha");
	else if(TB<7 && TB>=6) printf("Trung binh kha");
	else if(TB<6 && TB>=5) printf("Trung binh");
	else printf("Yeu");
	return 0;
}


