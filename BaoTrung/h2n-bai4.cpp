#include <stdio.h>
#include <math.h>

int main()
{
  long a=0,b=1;
  int n;
  scanf("%d",&n);
  if (n>0 && n<10000){
  while(a!=n)
  {  
        int c=2;
        b++;
        while(c*c<=b && b%c !=0)
		{
         c++;
        } 
        if(c*c>b)
        a++;  
  }
  printf("%ld",b);
 return 0;
}
}
