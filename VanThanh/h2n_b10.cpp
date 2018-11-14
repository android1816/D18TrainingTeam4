#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[100006];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
		
	for(int i=0;i<n-1;i++) 
	{
		for(int j=0;j<n-i-1;j++) 	
			if(a[j]<a[j+1])	swap(a[j],a[j+1]);
		
		for(int k=0;k<n;k++)	printf("%d ",a[k]);
		
		printf("\n");
	}
	
	return 0;
}

