#include <stdio.h>
int main(){
	int n,k;
	scanf("%d",&n);
	k=n-1;
	for (int i=0; i<n-1; i++) { 	// bài 4, 5 cần chỉnh lại ý tưởng, chỉ cần in khoảng trắng trước khi in số hoặc * thôi
					// còn sau khi in xong số, * thì không cần in khoảng trắng nữa	
		for (int j=0; j<2*n-1; j++) {
			if (j>=k-i && j<=k+i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
		for (int i=1; i<2*n;i++) {
	    printf("*");
	    }
	printf("\n");
	for (int i=n-2; i>=0; i--) {
		for (int j=0; j<2*n-1; j++) {
			if (j>=k-i && j<=k+i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
return 0;
}
