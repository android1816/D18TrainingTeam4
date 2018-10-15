#include <stdio.h>
int main() {
	int n,k;
	scanf("%d",&n);
	k=n-1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<=k+i; j++) {
			if (j>=k-i && j<k) printf("%d",j+1-(k-i));
			else if (j>=k) printf("%d",k+i+1-j);
			else printf(" ");
		}
		printf ("\n");
	}
	for (int i=n-2; i>=0; i--) {
		for (int j=0; j<=k+i;j++) {
			if (j>=k-i && j<k) printf("%d",j+1-(k-i));
			else if (j>=k) printf("%d",k+i+1-j);
			else printf(" ");
		}
		printf("\n");
	}
return 0;
}
