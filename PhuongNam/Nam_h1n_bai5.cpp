#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float p;
	printf("nhap 3 canh a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/2;
	if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0) {
		printf("dien tich tam giac la: %f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	else {
		printf("-1");
	}
}
