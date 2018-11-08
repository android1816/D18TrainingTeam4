#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000],n,k,x;
	scanf("%d %d %d",&n,&k,&x);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n+1;i++){
		if (i<k) printf("%d ",a[i]);
		else{
			if (i==k) printf("%d ",x);
			else printf("%d ",a[i-1]);
		}
	}
	return 0;
}

// code by Manh

