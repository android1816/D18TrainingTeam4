#include <stdio.h>
#include <math.h>

int main()
{
int n,k,i,j,m,tich1=1,tich2=1,tich3=1;
scanf ("%d %d",&n,&k);
for (i=1; i<=n; i++) {
	tich1*=i;
	}
for (j=1; j<=k; j++) {
	tich2*=j;
	}
for (m=1; m<=(n-k); m++) {
	tich3*=m;
	}
	printf ("%d",tich1/(tich2*tich3));
    return 0;
}
//code by hieu


