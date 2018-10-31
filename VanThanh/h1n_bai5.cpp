#include<stdio.h>
#include<math.h>
double s(long long a, long long b, long long c)
{
	double p;
	if (a+b>c && a+c>b && b+c>a)
	{	
		p=double(a+b+c)/2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	else
		return -1;
}
int main()
{
	long long a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lf",s(a,b,c));
	return 0;
}

