#include <stdio.h>
#include <conio.h>
  int gt(int n){
  	int s=1;
  	for(int i=2; i<=n;i++)
  	s=s*i;
  	return s;
  	
  }
int main() {

 
   int n, k, C ;
   printf ("nhap n:");
    scanf("%d",&n);
    
    printf ("nhap k:");
    scanf("%d",&k);
    
        if(n<k){
        	printf("moi ban nhap lai!");
			 scanf("%d",&n);
            scanf("%d",k);
        
    
		}
   C= gt(n)/(gt(k)*gt(n-k));
 

    printf ("%d", C);
return 0;
}
    
