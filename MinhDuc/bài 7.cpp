#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c,max1,max,min1,min;
   
   printf("nhap lan luot 3 so a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
   max1=((a+b)/2)+(abs(a-b)/2);
   max=((max1+c)/2)+(abs(max1-c)/2);
   min1=((a+b)/2)-(abs(a-b)/2);
   min=((min1+c)/2)-(abs(min1-c)/2);
   printf("so lon nhat la: %d\n",max);
   printf("so be nhat la: %d",min);
   
   return 0;
}
