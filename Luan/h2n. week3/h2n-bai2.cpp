#include <stdio.h>
int main(){
    int i, n, uoc=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	if(n%i == 0){
		uoc++;
	}
	printf("%d",uoc);
}
