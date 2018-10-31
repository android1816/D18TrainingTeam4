#include <stdio.h>
#include <math.h>
	int main(){
		long long a, t=0;
		printf("nhap so luong truoc thue: ");
		scanf("%lld", &a);
		if(a>=9*pow(10,6) && a<pow(10,18))
		if(a<5*pow(10,7)){
			t=a-(a*10/100);
			printf("thu nhap sau thue la: %lld", t);}
		else if(a<pow(10,9)){
			t=a-(a*30/100);
			printf("thu nhap sau thue la: %lld", t);}
		else {
			t=a-(a*50/100);
			printf("thu nhap sau thue la: %lld", t);}
		else{
			printf("so luong da nhap khong hop le.");}
	return 0;
	}
