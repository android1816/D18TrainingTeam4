#include<stdio.h>
#define max 1000000000
int main ()
{
  int n,d=0;
  scanf("%d",&n);
  if (n<=0 || n>=max) return 0;
  for (int i=1 ;i<=n;i++){
  	if (n%i==0) d++;
  }
  printf("%d",d);
  return 0;
}
