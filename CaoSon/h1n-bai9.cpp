#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	long long a,b,c,d,e,f,u1,u2,u;
	float x,y;
	printf("nhap a,b,c,d,e,f: ");
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	u=a*e-d*b;
	u1=c*e-f*b;
	u2=f*a-c*d;
	x=(float)u1/u;
	y=(float)u2/u;
	if(u==0)
	{
		if(u1!=0 || u2!=0)
		{
			printf("vo nghiem");
		}
		else
		{
			printf("vo so nghiem");
		}
	}
	else
	{
		printf("%.5f ",x);
		printf("%.5f",y);
	}
	return 0;
}

