#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,max1,max2,min1,min2,max,min;
	printf("Nhap 10^-8 < a < 10^8: \n");
	scanf("%d", &a);
	printf("Nhap 10^-8 < b < 10^8 : \n");
	scanf("%d", &b);
	printf("Nhap 10^-8 < c < 10^8 : \n");
	scanf("%d", &c);
	if( a>=100000000||a<=0.0000001||
		b>=100000000||b<=0.0000001||
		c>=100000000||c<=0.0000001)
		printf("Khong phu hop");
	else
	{
		max1= ( a > b ) ? a : b;
		max2= ( c > b ) ? c : b;
		max= ( max1 > max2) ? max1 : max2;
		min1= ( a < b ) ? a : b;
		min2= (c < b ) ? c : b;
		min= ( min1 < min2 ) ? min1 : min2;
		printf("Gia tri lon nhat= %d",max);
		printf("Gia tri nho nhat= %d",min);
		
	}		
	return 0;
}
