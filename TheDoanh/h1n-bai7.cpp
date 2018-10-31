//Bai7//
#include <stdio.h>
#include <math.h>

int main()
{
 int a,b,c,d;
 float TB;
 printf ("nhap so nguyen a:");
 scanf("%d",&a);
 
 	if (0<=a && a< pow(10,18)) 
 		{
 			if (a<=10)
 				{
 					if (a==0) 
 						printf ("zero");
					if (a==1) 
 						printf ("one");
 					if (a==2) 
 						printf ("two");
 					if (a==3) 
 						printf ("three");
 					if (a==4) 
 						printf ("four");
 					if (a==5) 
 						printf ("five");
 					if (a==6) 
 						printf ("six");
 					if (a==7) 
 						printf ("seven");
 					if (a==8) 
 						printf ("eight");
 					if (a==9) 
 						printf ("nine");
 					if (a==10) 
 						printf ("ten");
 			
				 }
			else
 				printf("greater than ten");
		 }
 	else
 		{
 			printf("nhap lai");
		 }
}
