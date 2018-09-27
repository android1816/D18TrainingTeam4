#include <stdio.h>  
#include <math.h>
int main()
{
	float x,S;
	
	printf("Ban kinh cua hinh tron la:");
	
	scanf("%f", &x);
	
	
	S=(x*x*M_PI)-2*x*x;
	
	printf("Dien tich to dam = %.3f",S);
	return 0;

}
	
