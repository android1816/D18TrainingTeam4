#include <stdio.h>

int main()
{
	int a,b,c;
	float d;
	printf("nhap 3 canh a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	d=(a+b+c)/2;
	if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0) {
		printf("dien tich tam giac la: %g",sqrt(d*(d-a)*(d-b)*(d-c)));
	}
	else {
		printf("-1");
	}
}



