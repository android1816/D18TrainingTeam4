#include <stdio.h>
#include <math.h>

int stn(int x)
{
	int y=x;
	int sdn=0;
    while(x>0)
    {
        int du=x%10;
        sdn=sdn*10+du;
        x=x/10;
    }
    if(y==sdn) return 1;
    else return 0;
}

int snt(int x)
{
	int s=0;
	while(x>0)
    {
        int du=x%10;
        s+=du;
        x=x/10;
    }
	if(s<2) return 0;
	else
	{
		for(int i=2; i<=sqrt(s); i++)
			if(s%i==0) return 0;
		return 1;
	}
}

int sl(int x)
{
	int dem=0;
	while(x>0)
    {
        int du=x%10;
        if(du%2==1) dem++;
        x=x/10;
    }
    if(dem==0) return 0;
    else return 1;
}

int main()
{
	int a, b, dem=0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++)
		if(stn(i)==1 && snt(i)==1 && sl(i)==1) 
		{
			printf("%d ", i);
			dem++;
		}
	if(dem==0) printf("-1");
	return 0;
}

