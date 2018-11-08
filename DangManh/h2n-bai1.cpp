#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	long long gt1=1,gt2=1,gt3=1;
	scanf("%d %d",&a,&b);
	for (int i=1;i<=a;i++){
		gt1=gt1*i;
	}
	for (int j=1;j<=b;j++){
		gt2=gt2*j;
	}
	for (int k=1;k<=a-b;k++){
		gt3=gt3*k;
	}
	printf("%d",gt1/(gt2*gt3));
	return 0;
}

// code by Manh

