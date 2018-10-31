#include <stdio.h>
int main() {
	int a, b, c;

	printf("nhap a, b and c:");
	scanf("%d%d%d", &a, &b, &c);

	{
		int max = a;
		if(max < b) {
			max = b;
		}

		if(max < c) {
			max = c;
		}

		printf("max la %d\n", max);
	}
	{
		int min=a;
		if(min > b) {
			min = b;
		}

		if(min > c) {
			min = c;
		}

		printf("min la %d\n", min);

		return 0;
	}
}

