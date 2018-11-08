#include<stdio.h>
int main ()
{
  int s=0,n,d=0;
  scanf("%d",&n);
  for (int i=1 ;i<n;i++){
    if (n%i==0) 
  	s=s+i;
  }
  if (n<0) return 0;
  if (s!=n) printf ("-1");
  else
  {
  for (int i=1;i<n;i++){
  	if (n%i==0) 
  	printf ("%d ",i);
  }
  return 0;
}
}
