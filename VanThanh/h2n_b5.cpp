#include<stdio.h>
#include<math.h>
int kt(int n)
{
    if (n < 2)    
        return 0;

    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int thuannghich(int n)
{
	int dao=0, m=n;
	while (n>0) 
	{
		dao=dao*10+n%10;
		n=n/10;
	}
	if(dao==m) return(1);
	return(0);
}

int le(int n)
{
	int x=1;
	while(n>0)
	{
		if((n%10)%2==0)
		{
			x=0;
			break;
		}	
		n/=10;
	}	
	return x;
}	
int main()
{
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
		if(kt(i)==1&&thuannghich(i)==1&&le(i)==1)
			{
				printf("%d ",i);
				dem++;
			}
	if(dem==0) printf("-1");
	return 0;
}


