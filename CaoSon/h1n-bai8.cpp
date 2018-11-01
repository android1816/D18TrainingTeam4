#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	long long a,b,c;
	double x,x1,x2,d;
	printf("nhap a,b,c: ");
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a==0 && b==0 && c==0)
	{
		printf("vo so nghiem");
	}
	else if(a==0)
	{
		x=(double)-c/b;
		printf("1\n");
		printf("%.5f",x);
	}
	else
	{
		d=(b*b-4*a*c);
		if(d==0)
		{
			if(b==0 && c!=0)
			{
				printf("vo nghiem"):
			}
			else if(b==0 && c==0)
			{
				printf("vo so nghiem");
			}
			else
			{
			x=(double)-b/2*a;
			printf("1\n");
			printf("%.5lf",x);
			}
		}
		else
		{
			x1=((double)-b-(sqrt(d))/2*a);
			x2=((double)-b+(sqrt(d))/2*a);
			printf("2\n");
			printf("%.5lf\n",x1);
			printf("%.5lf",x2);
		}
	}
	return 0;
}


