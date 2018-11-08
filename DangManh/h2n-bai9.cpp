#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000],n,x;
	scanf("%d %d",&n,&x);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++){
		if (a[i]!=x){
			printf("%d ",a[i]);
		}
	}
	return 0;
}

// code by Manh

