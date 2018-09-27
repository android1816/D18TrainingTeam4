#include <stdio.h>;
int main(){
	int n;
	long long A;
	printf("nhap so tu nhien n: ");
	scanf("%d",&n);
	A=n*(n+1)*(2*n+1)/6;
	printf("%lld",A);
	
	return 0;
}

