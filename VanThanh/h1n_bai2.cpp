#include<stdio.h>
int main()
{
	long long a;
	printf("Nhap a: ");
	scanf("%lld",&a);
	if (a%2==0)
		printf("even");
	else 
		printf("old");
	return 0;
}

