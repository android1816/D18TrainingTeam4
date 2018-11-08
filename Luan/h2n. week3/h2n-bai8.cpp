#include<stdio.h>
main(){
	int n, i; 
	int a[10000];
	scanf("%d",&n);
	for (i = 0; i < n ; i ++){
		scanf("%d",&a[i]);
	}
	for (i = n-1; i >=0  ; i --){
		printf("%d ",a[i]);
	}
}
