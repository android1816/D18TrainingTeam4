#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	long long s,l;
	printf("nhap tien luong truoc thue: ");
	scanf("%lld",&s);
	if(s>=9000000 && s<50000000)
	{
		l=s*90/100;
		printf("tien luong sau thue la: %lld\n",l);
	}
	if (s>=50000000 && s<1000000000)
	{
		l=s*70/100;
		printf("tien luong sau thue la: %lld\n",l);
	}
	if (s>=1000000000)
	{
		l=s*50/100;
		printf("tien luong sau thue la: %lld",l);
	}
	return 0;
}


