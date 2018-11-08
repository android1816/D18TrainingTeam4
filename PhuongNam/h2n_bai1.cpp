#include<stdio.h>
#include<math.h>
int main()
 {
	int n,k,nCk,a=1,b=1,c=1;
	scanf("%d%d",&n,&k);
	if(0<k&&k<n&&n<21)
	{
		for(int i=1;i<=n;i++)
		{
			a=a*i;
		}
		for(int j=1;j<=k;j++)
		{
			b=b*j;
		}
		for(int h=1;h<=(n-k);h++)
		{
			c=c*h;
		}
		nCk=a/(b*c);
		printf("%d\n",nCk);
	}
}
