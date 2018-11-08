#include <stdio.h>
#include <math.h>
int snt(int n)
{	
	if (n<2) return 0;
	if (n==2) return 1;
	for(int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for (int i=2; ;i++){
		if (snt(i)==1){
			dem+=1;	
			if (dem==n){
				printf("%d",i); 
				return 0;}
		}
	}	
}

// code by Manh

