#include <stdio.h>
#include <math.h>
int main()
{
	long long a,b,c;
	float x,x1,x2,delta;
	scanf("%lld%lld%lld", &a,&b,&c);
	if((a==0) && (b==0) && (c==0)) printf("vo so nghiem");
	else 
	    {
		delta= b*b - 4*a*c;
		if(delta > 0)
		   {
		     x1= (-b- sqrt(delta))/(2*a);
		     x2= (-b+ sqrt(delta))/(2*a);
		     printf("2\n%.5f\n%.5f", x1,x2);
		   } 
		if(delta < 0) 
		   {
		     printf("vo nghiem"); 
			 return 0;
		   }	
		if(delta==0) 
		   { 
		     x= -b/(2*a);
		     printf("1\n%.5f", x);
     	}
     	}
    if((a==0) && (b!=0) && (c!=0)) 
	{
		x= -c/b;
	    printf("1\n%.5f", x);
	}
    if((a!=0) && (b=0) && (c!=0)) printf("khong co nghiem");
	return 0;
}


