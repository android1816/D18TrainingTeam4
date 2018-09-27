#include <stdio.h>  
#include <math.h>
int main()
{
	long long a,b,c,x,y,max,min;
	
	printf("So thu nhat la \n");
	
	scanf("%lld",&a);
	
	printf("So thu hai la \n");
	
	scanf("%lld",&b);
	
	printf("So thu ba la \n");
	
	scanf("%lld",&c);
	
	x= (a+b + abs(a-b)) /2 ;
	max= (c+x + abs(c-x)) /2;
	
	y= (a+b - abs(a-b)) /2 ;
	min= (c+y - abs(c-y)) /2;
	
	printf("So lon nhat la = %lld \n",max);
	
	printf("So nho nhat la = %lld",min);
	
	return 0;

}
	
