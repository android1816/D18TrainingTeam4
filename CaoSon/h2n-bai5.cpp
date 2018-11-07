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
int sosieule(int n)
{
	int a=0,i=0;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		if(a%2==0)
		{
			i++;
		}
	}
	if(i==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
int tongnguyento(int n)
{
	int tong =0;
	while(n!=0)
	{
		tong=tong+n%10;
		n=n/10;
	}
	if(songuyento(tong)==0)
	{
		return 0; 
	}
	else
	{
		return 1;
	}
}
int sothuannghich(int a)
{
	int b,x;
		b=0;
		x=a;
		while(a!=0)
		{
			b=b*10+a%10;
			a=a/10;
		}
		if(x==b)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
int main(void)
{
	int L,R,dem,i;
	scanf("%d%d",&L,&R);
	for(i=L;i<=R;i++)
	{
		if (tongnguyento(i)!=0 && sosieule(i)!= 0 && sothuannghich(i)!= 0)
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


