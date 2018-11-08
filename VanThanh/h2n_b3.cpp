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

int main()
{
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
		if (kt(i)==1) 
		{
			printf("%d ",i);
			dem++;
		}
	if(dem==0) printf("-1");
	return 0;
}


