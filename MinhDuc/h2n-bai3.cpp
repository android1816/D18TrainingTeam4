#include<stdio.h>
#define max 10000
int main()
{
	int a, b, i, j, s,d=1;
	scanf("%d %d",&a,&b);
	if (a<0 || b>max || a>b ) return 0;
	for(i=a; i<=b; ++i)
{
	s=1;
	for(j=2; j<=i/2; ++j)
	{
		if(i%j==0)
		{
			s=0;
			break;
		}
	}
		if(s==1)
		{
		d=0;
		printf("%d ",i);
	    }
}
	if (d==1) printf ("-1");
     return 0;
}
