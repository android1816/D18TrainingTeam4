#include <stdio.h>
#include <math.h>

int main()
{
 long long a,b,c,max,min;
 printf ("nhap 3 so a,b,c:");
 scanf("%lld %lld %lld",&a,&b,&c);
	min=0;
	max=0;
	
 	if (a>=b) {
			max=a;
			min=b;
			}			
		else {
			min=a;
			max=b;
			}
			
 	if (max>=c) {
	 			printf ("so lon nhat la %lld\n",max);
				}				
 		else {
		 	printf ("so lon nhat la %lld\n",c);
		 	}
		 	
 	if (min<=c) {
	 		printf ("so nho nhat la %lld",min);
			 }			 
 		else {
		 	printf ("so nho nhat la %lld",c);
			}
 	
}

