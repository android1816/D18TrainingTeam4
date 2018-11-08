#include<stdio.h>;
int main()
{
	int n,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	if(n%i==0)
	{
		k++;
		}
		printf("%d",k);
		}
