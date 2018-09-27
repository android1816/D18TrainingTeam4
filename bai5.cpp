#include <stdio.h>;
#include <math.h>;
int main()
{
	int a,b,c,S;
	printf("nhap gia tri dien tich 3 mat: ");
	scanf("%d%d%d",&a,&b,&c);
	S=sqrt(a*b*c)/a+sqrt(a*b*c)/b+sqrt(a*b*c)/c;
	printf("tong gia tri 3 canh la: %d",S);
	

	
	
	return 0;
}

