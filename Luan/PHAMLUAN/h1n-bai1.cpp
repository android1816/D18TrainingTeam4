#include <stdio.h>
#include <math.h>
main(){
	long long a,b,c;
	printf("nhap ba so a,b,c: ");
	scanf("%lld%lld%lld", &a,&b,&c);
	long long max=a;
		if(max<b)
			max=b;
		if(max<c)
			max=c;
		printf("so lon nhat la: %lld\n", max);
	long long min=a;
		if(min>b)
			min=b;
		if(min>c)
			min=c;
		printf("so be nhat la: %lld", min);
	}


