#include <stdio.h>
int main()
{
	long long a,b,c,d,e,f,D1,D2,D3;
	float x1,x2;
	scanf("%lld%lld%lld%lld%lld%lld", &a,&b,&c,&d,&e,&f);
	D1= a*e - b*d;
	D2= c*e - b*f;
	D3= a*f - d*c;
	if(D1!=0) 
	  {
	 	x1= D2/D1;
	 	x2= D3/D1;
	    printf("(%.5f;%.5f)", x1,x2);
	  }
	else 
	   {
	     if(D2!=0 || D3!=0) printf("vo nghiem");
	     else 
	     { if(D2==0 && D3==0) printf("vo so nghiem");}
	   }
	return 0;
}


