//Code By PMD
#include<stdio.h>
#include<math.h>
int main ()
{
    long int a, b, c ;
    float p,s ;
	scanf("%d%d%d", &a, &b, &c);
	if( a+b>c && b+c>a && a+c>b )
	{
		p=(float)(a+b+c)/2;
		s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%f", s);
	}
	else 
		printf("-1");
        return 0;
}
//Code By PMD



