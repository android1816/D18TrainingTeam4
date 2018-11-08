#include<stdio.h>
int main ()
{
	int n,k,T;
	long long gt1=1,gt2=1,gt3=1;
	  scanf("%d %d",&n,&k);
	  if ( n<k || n>=21) return 0;
	for(int i=1;i<=n;i++){
	  	gt1=gt1*i;
		}
	for(int j=1;j<=k;j++){
	  	gt2=gt2*j;		
	  }
	for(int m=1;m<=(n-k);m++){
		gt3=gt3*m;
	}   
	T=gt1/(gt2*gt3);
	printf ("%d",T);
	return 0;  
}   
