#include <stdio.h>
#include <math.h>
#define oo 1000000000
int main(void)
{
	int x=0,n,i,j,max=-oo,max2=-oo,b=-oo;
	printf("Nhap vao so luong so:");
	scanf("%d",&n);
	int a[1000];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			x=i;	
			b=a[0];
			a[0]=a[x];
			a[x]=b;		
		}
		if(a[i]!=max && max2<=a[i] && a[i]!=a[0])
		{
			max2=a[i];
		}
	}
	printf("%d %d\n",max2,max);
}

