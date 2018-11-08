#include<stdio.h>
#include<math.h>
#define max 100000
int sochuso(int n)
{
  int b,c,d=1;
  b=n;
  for (int i=0;i<=6;i++)
  {
  	b=b/10;
  	if(b%2!=0) 
    d++;
  }
  if (d%2==0) return 0;
  else return 1;
}

int tongnguyento(int n)
{
	int s=0;
	int i,b=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
    }
    for(i=2;i<=sqrt(s);i++)
		{
			if(s%i==0)
			{
				b++;
			}
		}
		if(b==0) return 1;
        else return 0;
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
		if(x==b) return 1;
		else return 0;
}
int main()
{
	int L,R,dem,i;
	scanf("%d%d",&L,&R);
	if (L<0 || R>max) return 0;
	for(i=L;i<=R;i++)
	{
		if (tongnguyento(i)!=0 && sochuso(i)!= 0 && sothuannghich(i)!= 0)
		{
			printf("%d ",i);
			dem++;
		}
	}
	if (dem==0)
	{
		printf("-1");
	}
	return 0;
}
	
