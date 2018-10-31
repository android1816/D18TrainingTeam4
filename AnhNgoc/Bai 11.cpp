#include <stdio.h>

int main() {
int a, b ,c, max , min ;
printf ("nhap so di: ");
scanf ("%d %d %d", &a, &b, &c);
 max=a;
 	if (max<b) max= b;
 	if (max<c) max= c;
 	printf ("so lon nhat la: ");
  	printf ("%d\n" , max );
min=a;
	if (min>b) min= b;
	if (min>c) min= c;
	printf ("so nho nhat la: ");
	printf ("%d\n" , min );
	return 0;
}

