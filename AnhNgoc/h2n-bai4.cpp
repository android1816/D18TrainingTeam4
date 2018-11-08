#include <stdio.h>
#include <math.h>
int main() {
	int n,count=0;
	scanf ("%d",&n);
	for(int i=2;;i++){
		int A=1;
		for(int j=2;j<=sqrt(i);j++){
			if (i%j==0){
				A=0;
				break;
			}
		}
		if (A==1){
			count ++;
		}
		if (count==n){
			printf ("%d", i);
			break;
		}
	}
	return 0;
}

