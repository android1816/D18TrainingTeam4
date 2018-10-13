#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i=2;
	int dem=0;
	while (n>1){
		if (n%i==0) {
			dem++;
		    n=n/i;
		}
	    else {
	    	if (dem != 0)
	    	printf("%d %d\n",i,dem);
			i++;
			dem = 0;
		}
	}
	printf("%d %d\n",i,dem);
return 0;
}
