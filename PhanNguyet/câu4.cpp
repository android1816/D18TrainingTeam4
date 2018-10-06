#include <stdio.h>
int main (){
	long long n; float t;
	scanf("%ld",&n);
    if (n>1000000){
	if (n>1000000000){
		t=n/2;
		}
	else if (n>15000000 && n<1000000000) {
		t=n-n/3;
		}
	else if (n>7000000 && n<15000000)  {
	    t=n-n/5;
		}
	else t=n-n/10;
	printf("%f",t);	  	 
	}
return 0;
}	
