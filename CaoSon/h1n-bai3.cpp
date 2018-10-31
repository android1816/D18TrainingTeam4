#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	float a;
	printf("nhap vao so a bat ki: ");
	scanf("%f",&a);
	if(a==0)
	{
		printf("khong la ca hai");
	}
	else if(a<0)
	{
		printf ("am");
	}
	else
	{
		printf("duong");
	}
	return 0;
}


