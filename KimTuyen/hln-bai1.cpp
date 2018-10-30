#include<stdio.h>
int main()
{
long long a,b,c,min,max;
printf("Nhap 3 so nguyen:");
scanf("%lld%lld%lld", &a,&b,&c);
{
max=a;
if(max<b) max=b;
if(max<c) max=c;
printf("Max= %lld \n", max);
}
{
	min=a;
	if(min>b) min=b;
	if(min>c) min=c;
	printf("Min= %lld", min);
	}
	return 0;
}

