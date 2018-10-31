//Bai6//
#include <stdio.h>
#include <math.h>

int main()
{
 float a,b,c,d;
 float TB;
 printf ("nhap so diem cua hoc sinh a,b,c,d:");
 scanf("%f%f%f%f",&a,&b,&c,&d);
 
 	if (0<a && a<=10 && 0<b && b<=10 && 0<c && c<=10 && 0<d && d<=10) 
 		{
 			printf("Diem trung binh: %.1f \n",TB=(a+b+c+d)/4);
 			
 			if (TB>=9)
 				printf ("xuat sac");
 			if (8<=TB && TB<9)
 				printf ("gioi");
 			if (7<=TB && TB<8)
 				printf ("Kha");
 			if (6<=TB && TB<7)
 				printf ("Trung binh kha");
 			if (5<=TB && TB<6)
 				printf ("Trung binh");
 			if (TB<5)
 				printf ("Yeu");
		 }
 	else
 		{
 			printf("nhap lai diem");
		 }
}
