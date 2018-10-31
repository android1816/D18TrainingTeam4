#include<stdio.h>
#include<math.h>
int main()
{
	double x1,x2; 
	long long a,b,c,denta;
	scanf("%lld%lld%lld",&a,&b,&c);
	if (a==0)
		if (b==0)
			if (c==0)
				printf("vo so nghiem");
			else
				printf("vo nghiem")	;
		else
			printf("1\n%.5lf",(double)-c/b);
	else
		denta=b*b-4*a*c;
		if (denta <0)
			printf("vo nghiem");
		else
			if (denta==0)
				printf("1\n%.5lf",(double)-b/2*a);
			else
			{
				x1=(-b+sqrt(denta))/(2*a);
				x2=(-b-sqrt(denta))/(2*a);
				printf("2\n%.5lf\n%.5lf",x1,x2);
			}	
	return 0;
}
