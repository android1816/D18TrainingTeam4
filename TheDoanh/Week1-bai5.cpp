#include <stdio.h>  
#include <math.h>
int main()
{
	float a,b,c,S;
	
	printf("Dien tich mat thu nhat la: \n");
	
	scanf("%f",&a);
	
	printf("Dien tich mat thu hai la: \n");
	
	scanf("%f",&b);
	
	printf("Dien tich mat thu ba la: \n");

	scanf("%f",&c);
	
	S= ( sqrt(a*b*c)/a + sqrt(a*b*c)/b + sqrt(a*b*c)/c );
	
	
	printf("Tong chieu dai tat ca cac canh cua hinh hop chu nhat la = %.3f",S);
	return 0;

}
	
