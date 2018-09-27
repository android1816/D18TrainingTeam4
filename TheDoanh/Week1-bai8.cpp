#include <stdio.h>  
#include <math.h>
int main()
{
	int a,b;
	double S;
	
	printf("Nhap 2 so nguyen a,b \n");
	
	scanf("%d%d",&a,&b);
	
	S= ( a/7 + a*a*b - sqrt(abs(a-b)) + pow(b,5) ) * (2*a+4*b);
	
	printf("%.4f",S);

	return 0;

}
	
