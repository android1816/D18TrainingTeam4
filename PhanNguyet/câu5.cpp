#include <stdio.h>
#include <math.h>
int main (){
 int a,b,c; 
 float p,s;
 scanf("%d %d %d",&a,&b,&c);
  if ((a>0) &&(b>0)&&(c>0)) {
     if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
	 printf("la 3 canh tam giac\n");
	 p=(a+b+c)/2;
	 s=sqrt(p*(p-a)*(p-b)*(p-c));
	 printf("dien tich tam giac la: %.2f",s);
      }
   else printf("khong la 3 canh tam giac");
  }
return 0;
}	
