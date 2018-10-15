#include <stdio.h>
int main() {
	int a,b,d;
	scanf("%d %d",&a,&b);
	if (a<=b){
	    for (int i=0; i<a; i++) {
		for (int j=i+1; j<=b+i; j++){
			if (j<=b) 
			  d=j;
			else d=j-b;
		    printf("%d",d);
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
