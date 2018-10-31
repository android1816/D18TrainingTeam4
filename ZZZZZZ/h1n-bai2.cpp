#include <stdio.h>
int main()
{
	long long a;
	printf ("moi ban nhap so: ");
	scanf ("%lld", &a);
	if ( a%2==0 ) 
		{
			printf ("even");
		} 
	else 
		{
			printf ("odd");
		}
	return 0;
}

