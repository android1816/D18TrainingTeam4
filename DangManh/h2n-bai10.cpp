#include<stdio.h>
#include<math.h>
int main(){
	int n,a[10000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++) {
		for(int j=i+1;j<=n;j++) {
			if(a[j]>a[i]) {
				int r=a[i];
				a[i]=a[j];
				a[j]=r;
			}
		}
		for (int i=1;i<=n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
}
 
