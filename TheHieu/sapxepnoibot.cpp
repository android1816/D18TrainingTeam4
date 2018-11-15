#include<stdio.h>
#include<math.h>
 
int main(){
	int n,j,a[10000];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[j]<a[i]) {
				int r=a[i];
				a[i]=a[j];
				a[j]=r;
			}
		}
			for(j=n-1; j>=0; j--) {
				printf("%d ",a[j]);	
			}
		printf("\n");
	}
	printf ("WRONGGGGGG");
	return 0;	
}
