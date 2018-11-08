#include <stdio.h>
#include <math.h>

int main()
{
	int n,tong=0,i;
	scanf ("%d",&n);
	for (i=1; i<n; i++) {
		if (n%i==0) {
			tong = tong + i;
		}
	}
		if (n==tong) {
			for (i=1; i<n; i++) {
				if (n%i==0)
				printf ("%d ",i);
			}
		}
		else 
			printf("-1");
			
	return 0;

}
//code by hieu


