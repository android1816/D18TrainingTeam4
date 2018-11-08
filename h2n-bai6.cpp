#include <stdio.h>
int main() {
	int n,s,i;
	scanf ("%d", &n);
	s = 0;
	for (i=1;i<n;i++){
		if (n%i==0){
			s=s+i;
		}
	}
	if (s==n){
		for (i=1;i<n;i++){
			if (n%i==0){
				printf ("%d ", i);
			}
		}
	}
	else if (s!=n){
		printf ("-1");
	}
	return 0;
}
