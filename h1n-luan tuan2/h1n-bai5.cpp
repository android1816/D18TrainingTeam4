#include <stdio.h>
#include <math.h>
	int main(){
		float a,b,c;
		printf("nhap ba so a, b, c\n");
		scanf("%f%f%f", &a,&b,&c);
		if (a+b>c && a+c>b && b+c>a)
		{
			float s;
			s=(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4;
			printf("dien tich tam giac tren la: %.3f", s);
		}
		else
		{
			printf("-1");
			
		}
		return 0;
	}
