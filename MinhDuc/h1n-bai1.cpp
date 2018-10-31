//Code By PMD
#include<stdio.h>

int main ()
{
long long a, b, c;
	
      printf("nhap gia tri a b c :  ");
      scanf("%lld%lld%lld",&a,&b,&c);
	int max;
	  max = a;
	if(max < b) {max=b;}
	if(max < c) {max=c;}
	  printf("\nMax la: %lld", max);
	int min;
	  min = a;
	if(min > b) {min=b;}
	if(min > c) {min=c;}
	printf("\nMin la: %lld", min);

return 0;
}
//Code By PMD


