#include <stdio.h>
#include <math.h>
int main()
{
	int a[100],b[100],n,j=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=n;i>=1;i--){
		b[j]=a[i];
		j++;
	}
	for (j=1;j<=n;j++){
		printf("%d ",b[j]);
	}
	return 0;
}

// code by Manh

