#include<stdio.h>
main () {
  int a,b,n;
  scanf("%d",&n);
  a=0;
  if (n>0){
  for (int i=1 ;i<n; i++){
    if (n%i==0) {
  		a=a+i;
  	}
  }
  if (a==n){
  for (int i=1;i<n;i++){
  	if (n%i==0) 
  	printf ("%d ",i);
  	}
  }
   if (a!=n) printf ("-1");
	}
}
