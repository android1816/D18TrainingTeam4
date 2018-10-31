#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,p;
	float S;
	scanf("%d%d%d", &a,&b,&c);
		if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)) printf("La mot tam giac \n");
		else printf("-1");
    p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));	
    printf("Dien tich tam giac do la: %.2f\n", S);
	return 0;
}

