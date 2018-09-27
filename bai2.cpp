#include <stdio.h>;
int main(){
	int x;
	long long y;
	char z;
	float t;
	double k;
	scanf("%d %lld %c %f %lf",&x,&y,&z,&t,&k);
    printf("%d\n%lld\n%c\n%.3f\n%.9lf",x,y,z,t,k);
	return 0;
}

