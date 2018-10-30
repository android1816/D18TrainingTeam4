//Code By PMD
#include<stdio.h>

int main ()
{
int a, b, c;
	
      printf("nhap gia tri a b c :  ");
      scanf("%d%d%d",&a,&b,&c);
	int max;
	  max = a;
	if(max < b)
	{
	  max = b;
	}
	if(max < c)
	{
	  max = c;
	}
	  printf("\nMax la: %d", max);
	int min;
	
	  min = a;
	if(min > b)
	{
	  min = b;
	}
	if(min > c)
	{
	  min = c;
	}
	printf("\nMin la: %d", min);

return 0;
}
//Code By PMD


