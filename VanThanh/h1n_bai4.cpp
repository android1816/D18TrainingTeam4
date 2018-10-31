#include<stdio.h>
int main()
{
	long long a;
	printf("nhap luong truoc thue: ");
	scanf("%lld",&a);
	if (a>=9000000 && a<50000000)
		printf("thu nhap sau thue la %lld",a*90/100);
	if (a>=50000000 && a<1000000000)
		printf("thu nhap sau thue la %lld",a*70/100);
	if (a>=1000000000)
		printf("thu nhap sau thue la %lld",a*50/100);
	return 0;
}

