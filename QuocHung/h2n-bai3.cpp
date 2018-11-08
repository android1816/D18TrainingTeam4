#include <stdio.h>
#include <math.h>

int snt(int x)
{
	if(x<2) return 0;
	else
	{
		for(int i=2; i<=sqrt(x); i++)
			if(x%i==0) return 0;
		return 1;
	}
}
int main()
{
	int a, b, dem=0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++)
		if(snt(i)==1) 
		{
			printf("%d ", i);
			dem++;
		}
	if(dem==0) printf("-1");
	return 0;
}

