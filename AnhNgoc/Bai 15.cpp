#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	float p,S;
	printf ("nhap so: ");
	scanf ("%d %d %d",&a,&b,&c);
	if ((a+b>c) && (b+c>a) && (a+c>b)){
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("%f", S);
	}
	else {
		printf ("-1"); 
	}

	return 0;
}

