#include <stdio.h>
int main() 
{
	int a, b, c;

	printf("nhap ba so a,b,c:");
	scanf("%d%d%d", &a, &b, &c);

	{
		int max = a;
		if(max < b) {
			max = b;
		}

		if(max < c) {
			max = c;
		}

		printf("\n max la %d", max);
	}
	{
		int min=a;
		if(min > b){
			min = b;
		}
		if(min > c) {
			min = c;
		}

		printf("\n min la %d", min);
	}
}
