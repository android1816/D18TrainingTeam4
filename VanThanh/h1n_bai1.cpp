#include<stdio.h>
int main()
{
	long long a,b,c,max,min;
	scanf("%lld%lld%lld",&a,&b,&c);
	max=a;
	if (max<b) 
		max= b;
	if (max<c)
		max=c;
	min=a;
	if (min>b)
		min=b;
	if (min>c)
		min=c;
	printf(" gia tri lon nhat la %lld \n gia tri nho nhat la %lld",max,min);
	return 0;
}

