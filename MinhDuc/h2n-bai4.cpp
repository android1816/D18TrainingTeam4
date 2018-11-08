#include <stdio.h>
#include <math.h>
#define max 10000
int main()
{
  long i=0,j=1;
  int n;
  scanf("%d",&n);
  if (n<=0 || n>max) return 0;
  while(i!=n)
  {  
        int d=2;
        j++;
        while(j%d!=0&&d<=sqrt(j))
		{
         d++;
        } 
        if(d>sqrt(j))
        i++;  
  }
  printf("%ld",j);
 return 0;
}
