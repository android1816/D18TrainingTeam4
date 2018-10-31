#include <stdio.h>

int main() {
	long long a;
	printf (" nhap so: ");
	scanf ("%lld", &a);
	if (a>0) {
		printf ("duong");
	}
	else if (a<0) {
			printf ("am");
		}
		else {
			printf("khong la ca hai");
		}
	


	return 0;
}

