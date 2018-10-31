#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;
	printf (" nhap a, b, c");
	scanf (" %d%d%d", &a, &b, &c);
	int max, min;
	
	max = a;
	if (max < b){ max = b; }
	if (max < c){ max = c; }
	printf ("\nmax la : %d", max);
	
	min = a;
	if (min > b){ min = b; }
	if (min > c){ min = c; }
	printf ("\nmin la : %d", min);
	
	return 0;
	
}

