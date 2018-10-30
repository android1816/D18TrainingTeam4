#include<stdio.h>
int main()
{
    long long a;
	printf("Nhap so nguyen a:");
	scanf("%lld", &a);
	{
		if(a%2==0)
		printf("%lld even",a);
		else 
		printf("%lld odd",a);
		
	}

	return 0;
}

