#include <stdio.h>
#include <math.h>
int songuyento(int n)
{
	int i,b=0;
	if (n<2)
	{
		return 0;
	}
	else if(n>=2)
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				b++;
			}
		}
		if(b==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main(void)
{
	int n,m,i,dem=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(songuyento(i)!=0)
		{
			printf("%d ",i);
			dem++;
		}
	}
	if (dem==0)
	{
		printf("-1");
	}
}


