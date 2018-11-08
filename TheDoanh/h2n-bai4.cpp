#include <stdio.h>
#include <math.h>
int main() 
{
	int n;
	scanf ("%d", &n);
	int dem=0, check;
	for (int i=2; i<10000; i++) {
		check=0;
		for (int j=2; j<=sqrt(i); j++) {
			if (i%j==0) {
				check=1;
			}
		}
		if (check==0) dem++;
		if (dem==n) {
			printf ("%d", i); break;
		}
	}
}
