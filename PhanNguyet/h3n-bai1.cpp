#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		for (int j=i; j>0; j--) {
		    printf("%d",j);
		}
		for (int j=2; j<n-i+2; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
return 0;
}
