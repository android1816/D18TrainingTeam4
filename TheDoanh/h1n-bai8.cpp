//Bai8//
#include <stdio.h>
#include <math.h>

int main()
{
 long long a,b,c;
 float x,x1,x2,denta;
 printf ("nhap he so: ");
 scanf("%lld%lld%lld",&a,&b,&c);
 

 	if (a==0)
		{
			if (b==0)
				printf("vo nghiem");
			else 
				if (c==0)
					printf("vo so nghiem");
				else
					{
						x=(float)-c/b;
						printf("1 \n");
						printf("%.5f",x);
					}
					
		}
 	else {
 		denta = b*b - 4 * a * c;
 		if (denta < 0) printf ("vo nghiem");
 		else if (denta == 0) printf ("1\n%.5f",x1=(float)-b / (2 * a));
 		else {
 				x1=(-b - sqrt(denta)) / (2 * a);
 				x2=(-b + sqrt(denta)) / (2 * a);
 				printf ("2\n");
 				printf ("%.5f\n",x1);
 				printf ("%.5f",x2);
		}
	}

 			
 }
