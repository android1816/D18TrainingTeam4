#include <stdio.h>
int main() {
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b && a>=c) {
		max=a;
		}
	else if (b>=a && b>=c) {
		max =b;
		}
	else max=c;
	printf("so lon nhat la: %d",max);
	printf("\n");
	
    if (a<=b && a<=c) {
		min=a;
		}
	else if (b<=a && b<=c) {
		min =b;
		}
	else min=c;
	printf("so nho nhat la: %d",min);
return 0;
}	
