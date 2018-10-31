#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,p;
	float S;
	scanf("%d%d%d", &a,&b,&c);
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a) && (a>0) && (b>0) && (c>0))  
	{ 
       p=(a+b+c)/2;
	   S=sqrt(p*(p-a)*(p-b)*(p-c));	
       printf("Dien tich tam giac do la: %f\n", S);
    }
    else 
	{
	   printf("-1");
    }
	return 0;
}

