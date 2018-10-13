#include <stdio.h>
int main() {
	int a,b,d;
	scanf("%d %d",&a,&b);
	if (a<=b){
	  for (int i=0; i<a; i++) {
		for (int j=i+1; j<=b; j++){
		    printf("%d", j);
		}
		for (int j=1; j<=i; j++ ) {
		    printf("%d",j);
		}
		printf("\n");
	  }
	}
	else {
	  for (int i=0; i<a; i++) {
		for (int j=i+1; j<=b+i; j++){
			if (j<=a) 
			  d=j;
			else d=j-a;
		    printf("%d",d);
		}
		printf("\n");
	  }
	}
return 0;
}
