#include <stdio.h>
int main() {
int n,a;
scanf("%d",&n);
  int x=0;
  while (n !=0) {
  	x=x*10 + n%10;
  	n/=10;
  	}
  while (x!=0) {
    a=x%10;
	x/=10;
	if (a==0) {
	printf("khong ");
	}
	else if (a==1) {
	printf("mot ");
	}	
	else if (a==2) {
	printf("hai ");
	}	
	else if (a==3) {
	printf("ba ");
	}
	else if (a==4) {
	printf("bon ");
	}		
	else if (a==5) {
	printf("nam ");
	}	
	else if (a==6) {
	printf("sau ");
	}	
	else if (a==7) {
	printf("bay ");
	}	
	else if (a==8) {
	printf("tam ");
	}	
	else if (a==9) {
	printf("chin ");
	}	
  }
return 0;
}
