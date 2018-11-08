#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if (n==0 || n==1) return 0;
	if (n==2 || n==3) return 1;
	else{
		for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
		}
	}
	return 1; 	
}
int main()
{
	int a,b,dem=0;
	scanf("%d %d",&a,&b);
	for (int i=a;i>=a && i<=b;i++){
		if (snt(i)==1) {
			printf("%d ",i);
			dem=1;
		}
	}
	if (dem==0) printf("-1");
	return 0;
}

// code by Manh

