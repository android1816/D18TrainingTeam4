#include<stdio.h>
#include<math.h>
int max(int a,int b)
{

	return (a+b)/2+abs(a-b)/2;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",max(max(a,b),c));
	return 0;
}

