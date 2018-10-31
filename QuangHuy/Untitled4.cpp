#include <stdio.h>
#include <math.h>

int main ()
{
	int a;
	printf("\n Nhap a : ");
	scanf("%d",&a);
	
	if(9*1000000<=a&&a<=5*10000000) printf("\n Luong = %d",9*a/10);
	if(1000000000<=a) printf("\n Luong = %d",5*a/10);
	if(5*10000000<=a&&a<1000000000) printf("\n Luong = %d",7*a/10);
	return 0;

}

