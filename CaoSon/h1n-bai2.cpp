#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	long long a;
	printf("nhap vao so a: ");
	scanf("%lld",&a);
	if (a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}


