#include <stdio.h>
#include <math.h>
int SNT(int a)
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
int main()
{
    int i=1, dem=0, n;
    scanf("%d", &n);
    while(dem!=n)
    {
    	i++;
    	if(SNT(i)==1)
    	dem++;
    }
    printf("%d", i);
   return 0;
}


