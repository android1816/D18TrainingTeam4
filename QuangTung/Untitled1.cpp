#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ( (a>b)&&(b>c)&&(a>c))
	   { 
	   printf("max%d",a);
	   printf("min%d",c);
	   }
	else
	   if ( (a>b)&&(c>b)&&(a>c))
	   { 
	   printf("max%d",a);
	   printf("min%d",b);
	   }
	   else
	       if ( (b>a)&&(b>c)&&(a>c))
	   { 
	   printf("max%d",b);
	   printf("min%d",c);
	   }
	        else
	            if ( (b>a)&&(b>c)&&(c>a))
	   { 
	   printf("max%d",b);
	   printf("min%d",a);
	   }
	            else
	                if ( (a>b)&&(c>b)&&(c>a))
	   { 
	   printf("max%d",c);
	   printf("min%d",b);
	   }
	                else
	   { 
	   printf("max%d",c);
	   printf("min%d",a);
	   }
	return 0;                
}

