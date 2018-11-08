#include <stdio.h>
#include <math.h>
int songuyento(int a)
{
   	int i;
	if(a<2) return 0;
	if(a==2 || a==3) return 1;
	if(a%2==0 || a%3==0)  return 0;
	for(i=5; i< sqrt(a); i+=6)
	    if( a%i==0 || a%(i+2)==0) 
	    return 0;
	return 1;
}
int sothuannghich(int a)
{
	int x,y;
	x=0;
	y=a;
	while(a!=0)
	{ 
	    x=x*10 + a%10;
	    a=a/10;
	}
	if(y==x) return 1;
	else return 0;
}
int sole(int a)
{
	int b=1;
	while(a>0)
	{
		if((a%10)%2==0)
		{
			b=0;
            return 0;
        }
        a/=10;
    }
    return 1;
}
int main()
{
	int L, R, dem=0;
	scanf("%d%d", &L, &R);
	for(int i=L; i<=R; i++)
	{
		if((songuyento(i)==1) && (sothuannghich(i)==1) && (sole(i)==1))
		{
			printf("%d ", i);
			dem++;
		}
	}
	if(dem==0) { printf("-1");}
}


