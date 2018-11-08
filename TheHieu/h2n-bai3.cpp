#include <stdio.h>
 
int main()
{
    int a, b, x, biendem = 0;
    scanf("%d %d",&a,&b);
    if (a == 1) a = 2;
    for (int i = a; i <= b; i++)
    {
    	x = 1;
    	for (int j = 2; j<i; j++)
             if (i % j == 0) x = 0;
        if (x == 1)
        {
        	biendem++;
        	printf ("%d ",i);
        }	
    }
    if (biendem == 0) printf("-1");
    return 0;
}
