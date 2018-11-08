#include <stdio.h>
long long giaithua(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	{
	    long long s=1;
	    for(int i=2; i<= n; i++)
	    s=s*i;
	    return s;
	}
}
int main()
{
	int k, n, kq;
	scanf("%d%d", &n, &k);
    kq = giaithua(n)/(giaithua(k)*giaithua(n-k));
	printf("%d", kq);
return 0;
}



