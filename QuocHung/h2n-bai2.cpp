#include <stdio.h>
#include <math.h>
int main()
{
	int n, dem=2;
	scanf("%d", &n);
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) dem+=2;
		if(n==i*i) dem--;	
	}
	printf("%d", dem);
	return 0;
}

