#include<stdio.h>
#include<math.h>
int main ()
{
	double a;
	printf("Nhap gia tri a:");
	scanf("%f",&a);
	if (a > 0)
		printf("duong");
	else if (a<0)
		printf("am");
	else
		printf("Khong la ca hai");
	return 0;	
}
