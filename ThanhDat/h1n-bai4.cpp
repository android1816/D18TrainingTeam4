#include<stdio.h>
#include<math.h>
int main()
{
	float A,B,i;
	printf("Nhap luong truoc thue A:");
	scanf("%f",&A);
	if ( 5*pow(10,7) > A && A>= pow(10,6))
		i=0.9;
	else if (5* pow(10,7) <= A && A< pow(10,9))
		i=0.7;
	else if (A>=pow(10,9))
		i=0.5;
	printf("Thu nhap sau thue:%f \n",B=A*i);
	return 0;
	
}

