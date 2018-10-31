#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float p,s;

    scanf("%d%d%d",&a,&b,&c);
		if (a+b>c && a+c>b && b+c>a)
		{
			p=(a+b+c)/2;
			s=1.0*(sqrt(p*(p-a)*(p-b)*(p-c)));
			printf("Dien tich tam giac la: %f",s);
		}
		else
		{
			printf("-1");
		}
	return 0;
}
