#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,j;
	long long a[100000],b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j-1]<a[j])
			{
				b=a[j-1];
				a[j-1]=a[j];
				a[j]=b;
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%lld ",a[j]);
		}
		printf("\n");
	}
}
