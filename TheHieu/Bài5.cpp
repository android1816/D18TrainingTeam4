	#include<stdio.h>
	#include<math.h>

int main(){
	float a,b,c,S;
	printf("dien tich cua 3 mat chung cua mot dinh la ");
	scanf("%f %f %f",&a,&b,&c);
	S = 4*(sqrt(a*b*c)/a + sqrt(a*b*c)/b + sqrt(a*b*c)/c);
	printf("tong cac canh hinh hop chu nhat = %f", S);
	return 0;
	}
