#include <stdio.h>
#include <math.h>

int main()
{
float a;
	printf("diem trung binh = ");
	scanf("%f",&a);
if (a >= 9 && a <= 10)
	printf ("xuat sac");
else if (8 <= a && a < 9)
	printf("gioi");
else if (7 <= a && a < 8)
	printf("kha");
else if (6 <= a && a < 7)
	printf("trung binh kha");
else if (5 <= a && a < 6)
	printf("trung binh");
else if (0 <= a && a < 5)
	printf("yeu");
    return 0;
}
//code by hieu


