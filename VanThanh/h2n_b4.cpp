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
	int i=1,n,dem=0;
	scanf("%d",&n);
	while (n!=dem)
	{
		if(kt(i)==1) dem++;
		i++;
	}
	printf("%d",i-1);
	return 0;
}


