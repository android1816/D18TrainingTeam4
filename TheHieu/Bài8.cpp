	#include<stdio.h>
	#include<math.h>
	int main(){
		int a,b;
		float x;
		scanf("%d %d",&a,&b);
		x = (a/7 + a*a*b - sqrt(abs(a-b)) + b*b*b*b*b)*(2*a + 4*b);
		printf("%.4f",x);
	return 0;
	}
