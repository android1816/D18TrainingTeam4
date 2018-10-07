#include <stdio.h>
int main (){
int n;
 scanf("%d",&n);
 	for (int t=1; t<=n; t++){
	    printf("*");
	}	
	printf("\n");
	for (int i=n-1; i!=0; i--) {
		for (int j=i; j!=0; j--) {
			if ((j==1)||(j==i)) printf("*");
			else printf(" ");
		}	
	printf("\n");
	}
return 0;
}
