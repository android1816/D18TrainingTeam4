#include<stdio.h>
int main()
{
	long long a,b,c,d,e,f,d1,d2,d3;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	d1=a*e-d*b;
	d2=c*e-f*b;
	d3=a*f-d*c;
	if (d1!=0)
		printf("(%.5lf;%.5lf)",(float)d2/d1,(float)d3/d1);
	else
		if(d2!=0 || d3!=0)
			printf("vo nghiem");
		else
			if(d2==0&&d3==0)
				printf("vo so nghiem");
	return 0;
}

