#include <stdio.h>
#include <math.h>
	int main(){
		float a, b, c, tb=0;
		printf("nhap diem");	
		scanf("%f%f%f",&a,&b,&c);
		tb=(a+b+c)/3;
		if(tb>=9){
			printf("xuar sac");}
		else if(8<=tb){
			printf("gioi");}
		else if(7<=tb){
			printf("kha");}
		else if(6<=tb){
			printf("trung binh kha");}
		else if(5<=tb){
			printf("trung binh");}
		else {
			printf("yeu");}
	return 0;
	}
