#include <stdio.h>
#include <math.h>

int main()
{
int a,b,c;
float p,s;
	printf("nhap ba so :");
	scanf("%d %d %d",&a, &b, &c);
	p = .0*(a+b+c)/2;
	s = .0*sqrt(p*(p-a)*(p-b)*(p-c));
if (a+b>c && b+c>a && a+c>b)
	printf("dien tich tam giac la : %f",s);
else 
	printf("-1");
    return 0;
}
//code by hieu


