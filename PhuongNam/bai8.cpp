#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	float x;
	scanf("%d%d",&a,&b);
	x=(a/7+pow(a,2)*b-sqrt(abs(a-b))+pow(b,5))*(2*a+4*b);
	printf("%.3f",x);
	return 0;
	}
