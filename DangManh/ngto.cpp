#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,dem=0;
	scanf ("%d",&n);
	if ( (n==0) || (n==1) ){
		printf("NO");
	}
	else{
		if (n==2) printf("YES");
		else{
			for (i=2;i<=sqrt(n);i++){
				if (n%i==0)
				dem=1;	
			}
			if(dem==1) printf("NO");
			else printf ("YES");
		}
	}

	return 0;
}

