#include <stdio.h>
int main() {
	int n,dem;
	scanf ("%d", &n);
	dem= 0;
	for (int i=1;i<=n;i++){
		if (n%i==0){
			dem= dem + 1;
		}
	}
	printf ("%d", dem);
	return 0;
}

