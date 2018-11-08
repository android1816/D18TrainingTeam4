#include<stdio.h>
#include<math.h>
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0) dem += 2;
	if( sqrt(n)*sqrt(n) ==n )
		printf("%d",dem-1);
	else printf("%d",dem);
	
	return 0;
}


