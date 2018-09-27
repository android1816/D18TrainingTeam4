#include <stdio.h>  
#include <math.h>
int main()
{
	long long n,S;
	
	printf("n = ");
	
	scanf("%lld",&n);
	
	S= (n*(n+1)*(2*n+1))/6;
	
	printf("n=%lld",S);

	return 0;

}
	
