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
	int n, so=0, i=0;
	scanf("%d", &n);
	while(i!=n)
	{
		so++;
		if(snt(so)==1) i++;
	}
	printf("%d", so);
	return 0;
}

