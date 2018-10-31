#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,d,e,f;
	printf("Giai he phuong trinh bac nhat 2 an: \n");
	printf("ax+by=c \n");
	printf("dx+ey=f \n");
	printf("Nhap cac he so  (0 <= a, b, c < 10^18) : ");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if ((a/d)==(b/e)==(c/f))
		printf("Vo so nghiem");
	else if ((a/d)==(b/e) && (b/e)!=(c/f))
		printf ("Vo nghiem");
	else
	{
		double d,dx,dy,x,y;
		d=a*e-d*b;
		dx=c*e-b*f;
		dy=a*f-d*c;
		printf("He phuong trinh co mot nhiem (x,y)= (%.5f , %.5f)",x=-dx/d,y=-dy/d);
	}
return 0;
}
