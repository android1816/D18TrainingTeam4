#include <stdio.h>
int main()
{
	long long a,b,c;
	printf("nhap 3 so: ");
	scanf("%lld %lld %lld", &a, &b, &c);
	if ((a>c) && (a>b)) 
		{
			printf ("so lon nhat la: %lld \n",a);
		}
	if ((b>c) && (b>a)) 
		{
			printf ("so lon nhat la: %lld \n",b);
		}
	if ((c>a) && (c>b)) 
		{		
			printf ("so lon nhat la: %lld \n",c);
		}	
	if ((a<c) && (a<b)) 
		{
			printf ("so nho nhat la: %lld",a);
	}	
	if ((b<c) && (b<a)) 
		{
			printf ("so nho nhat la: %lld",b);
		}
	if ((c<a) && (c<b)) 
		{
			printf ("so nho nhat la: %lld",c);
		}

	return 0;
}

