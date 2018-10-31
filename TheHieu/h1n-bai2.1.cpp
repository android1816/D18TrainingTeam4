#include <stdio.h>
int main() {
	long long a, b, c;

	printf("nhap ba so :");
	scanf("%lld%lld%lld", &a, &b, &c);

	{
		int max = a;
		if(max < b)
			{max = b;}

		if(max < c) 
		{max = c;}

		printf("max la %lld\n", max);
	}
	{
		int min=a;
		if(min > b) 
		{min = b;}

		if(min > c) 
		{min = c;}

		printf("min la %lld\n", min);

		return 0;
	}
}

