#include <stdio.h>
#include <math.h>

int main()
{
	int n,i=1,j,x,dem=0;
	scanf("%d",&n);
	while (dem<n) {
		x=1;
		i++;
		for(j=2; j<i; j++) 
		if (i%j==0)
			x=0;
		if(x==1) {
			dem++;

		}
	}
	printf ("%d",i);
    return 0;
}
//code by hieu


