//Code By PMD
#include<stdio.h>

int main ()
{ 
    float a,b,c,d;
    float TB;
      printf ("nhap gia tri a b c d : ");
      scanf ("%f%f%f%f",&a,&b,&c,&d);
      TB=(a+b+c+d)/4;
    if (0<=a && a<=10 && 0<=b && b<=10 && 0<=c && c<=10 && 0<=d && d<=10)
    {
	  printf ("%.3f\n",TB);
    if (TB>=9)          printf("Xuat sac");
    if (TB>=8 && TB<9)  printf ("gioi");
    if (TB>=7 && TB<8)  printf ("kha");
    if (TB>=6 && TB<7)  printf ("trung binh kha");
    if (TB>=5 && TB<6)  printf ("trung binh");
    if (TB<5)           printf ("yeu");
    }
    else 
    printf ("nhap lai");
	return 0;

}
//Code By PMD

