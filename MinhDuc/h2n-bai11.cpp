#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	int a[100005],b[100005];	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+m);
	for (i=m-1;i>=0;i--)
	{
		n++;
		a[n-1]=b[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
}
