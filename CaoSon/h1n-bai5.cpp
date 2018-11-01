#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	int a,b,c;
	float p,s;
	printf("nhap 3 canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
		if (a+b>c && a+c>b && b+c>a)
		{
			p=(float)(a+b+c)/2;
			s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
			printf("Dien tich tam giac la: %f",s);
		}
		else
		{
			printf("-1");
		}
	return 0;
}


