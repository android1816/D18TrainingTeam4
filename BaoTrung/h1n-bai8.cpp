#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d;
	printf("\nMoi nhap he so a,b,c :\n");
	scanf ("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if (a==0){
		if (b==0){
			if (c==0){
			printf ("\nPTVSN");
			}
			else{
			printf("\nPTVN");
			}
		}
		else {
		printf ("\nPT co nghiem duy nhat:\n x = %.5f", -c/b);
		}
	}
	else {
		if (d>0){
			printf ("\nPT co 2 ngiem phan biet:\n x1 = %.5f \n x2 = %.5f ", (-b-sqrt(d))/(2*a) , (-b+sqrt(d))/(2*a));
		}
		else if (d==0){
			printf("\nPT co ngiem kep:\n x1 = x2 = %.5f",-b/(2*a));
		}
		else if (d<0){
			printf("\nPTVN");
		}
	}
}
