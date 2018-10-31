#include <stdio.h>
int main()
{
	long long a;
	printf ("moi ban nhap a: ");
	scanf ("%lld", &a);
	if (a==0)
		{
			printf ("khong ca hai");
		}
	else
		{
			if (a>0)
				{
					printf ("duong");
				}
			else 
				{
					printf ("am");
				}
		}
	

	return 0;
}

