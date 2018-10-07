#include <stdio.h>
int main (){
int n;
printf("nhap diem: ");
scanf("%d",&n);
  if (n<=10){
	if (n>=9){
		printf("xuat sac");
		}
	else if ((n>=8)&&(n<9)){
		printf("gioi");
		}
	else if ((n>=7)&&(n<8)){
	        printf("kha");
	        }
	else if ((n>=6)&&(n<7)){
		printf("TB kha");
		}
	else if ((n>=5)&&(n<5)){
		printf("TB");
		}
	else printf("Yeu");
	}
return 0;
}	
