#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Nhap 10^-8 < a < 10^8 :");
	scanf("%d",&a);
	if (a<=0.0000001||a>=100000000)
		printf("Khong phu hop yeu cau");
	else if (a%2 == 0)
		printf("Even");
	else 
		printf("Odd");
	return 0;
	
}
