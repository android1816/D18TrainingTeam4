#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	long long a,b,c,max1,max,min1,min;
	printf("nhap 3 so a,b,c: ");
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a>b)
	{
		max1=a;
		min1=b;
	}
	else
	{
		max1=b;
		min1=a;
	}
	if (max1>c)
	{
		max=max1;
	}
	else
	{
		max=c;
	}
	if (min1>c)
	{
		min=c;
	}
	else
	{
		min=min1;
	}
	printf("so lon nhat la: %d\n",max);
	printf("so be nhat la: %d",min);
	return 0;
}


