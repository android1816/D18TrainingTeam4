//Bai4//
#include <stdio.h>
#include <math.h>

int main()
{
 long long A,B;
 printf ("nhap luong truoc thue:");
 scanf("%lld",&A);
 B=0;
	if (A<pow(10,6) | A>pow(10,18) )
		{
			printf ("! tien luong phai lon hon 10^6 va nho hon 10^18");

		}
		else 
			{
				if ((9*pow(10,6)) <=A && A <(5*pow(10,7)))
					{
						B = A*90/100;
					}
				else
					{
						if ((5*pow(10,7)) <=A && A <(pow(10,9)))
							{
								B = A*70/100;
							}
						else
							{
								B = A*50/100;
							}
					}
				
				
				printf("tien thu nhap sau thue la %lld",B);
			}
 
 	
}
