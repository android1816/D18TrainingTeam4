#include <stdio.h>  
#include <math.h>
int main()
{
	float r,C,S;
	
	printf("Ban kinh cua hinh tron la:");
	
	scanf("%f", &r);
	
	C=2*r*M_PI;
	
	printf("Chu vi hinh tron: %.3f\n",C);
	
	S=r*r*M_PI;
	
	printf("Dien tich hinh tron: %.3f",S);
	return 0;

}
	
