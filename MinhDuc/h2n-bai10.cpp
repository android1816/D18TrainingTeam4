#include <stdio.h>
int main()
{
	int n,i,j;
	long long a[100000],b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j = 0;j<n-i-1; j++){
			if(a [j] < a[j+1] ){
				b=a[j+1];
				a[j+1]=a[j];
				a[j]=b;
			}
		}
		for(j=0;j<n;j++){
			printf("%lld ",a[j]);
		}
		printf("\n");
	}
}
